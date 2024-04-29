# 메모리 구조
메모리는 운영체제에서 할당을 해준다.
- 데이터 영역 : 전역변수와 static 변수가 저장되는 영역
- 힙 영역 : 프로그래머의 필요에 의해 할당/소멸이 이루어지는 영역
- 스택 영역 : 지역변수와 매개변수가 저장되는 영역

## 메모리의 확보 방법
### 메모리 정적 할당 
- 메모리의 `데이터 영역`과 `스택 영역`을 이용
- 프로그램을 `작성하는 단계`에서 필요한 메모리의 크기 결정

### 메모리 동적 할당
- 메모리의 `힙 영역` 이용
- 프로그램이 `실행 중`에 입력되는 자료에 맞게 메모리의 크기 결정

## 메모리 동적할당 순서
1. 메모리를 동적으로 할당 받을 변수를 `포인터`를 이용하여 선언한다.
2. `malloc()`과 같은 함수를 이용하여 메모리를 동적으로 할당한다.
3. 메모리 공간의 사용이 끝나면 `free()` 함수를 이용하여 메모리 공간을 해제한다.

### malloc()
주어진 크기만큼 메모리를 동적으로 할당함.
``` C 
void *malloc(size_t number_of_bytes)
```
- 인자로 할당 받고자 하는 메모리의 크기를 `byte` 단위로 전달
- 이렇게 찾은 메모리 블록의 `첫 번째 바이트를 가리키는 주소값`을 반환합니다.
- 메모리의 초기화가 안된다. (초기화를 위해서는 memset()을 사용해야함)

``` C
// 사용예시
#include <stdio.h>
#include <stdlib.h>
void main(){
    int *a;
    a = (int *)malloc(sizeof(int)); // a와 자료형을 일치시키기 위한 (int*)사용
    if(a == NULL) {
        puts("메모리 할당 실패");
        exit(1);
    }
    *a = 20;
    printf("힙에 저장된 변수 a: %d\n", *a);
    free(a); // 할당받은 메모리 해제
}
```

### free()
힙 영역에 할당된 공간은 프로그램이 종료될 때까지 유지된다  
따라서 명시적으로 반납하기 위해 `free()`를 사용한다.
``` C
void free(void *p);
```

### calloc()
malloc()함수와 유사하나 메모리에 할당된 공간을 `0으로 초기화`한다
``` C
void *calloc(int n, int size);
```

``` C
// 사용예시
#include <stdio.h>
#include <stdlib.h>
void main(){
    int i;
    int *a;
    a = (int *)calloc(5, sizeof(int))l // int형 크기의 메모리 공간을 5개 할당
    for (i=0;i<5;i++){
        printf("%d\n", a[i])
    }
    free(a)
}
```

### realloc()
이미 할당받은 메모리 공간의 크기를 변경해야할 필요가 있을 때 사용
``` C
void *realloc(void *p, int size);
``` 

``` C
// 사용예시
int *a;
a = (int*)calloc(5, sizeof(int)); // 5개할당
a = (int*)realloc(a, 10*sizeof(int)); // 10개 재할당
``` 

## 메모리 관리 함수
### memcmp()
메모리에 들어있는 자료를 주어진 크기만큼 `비교하여 같은지` 여부를 확인해줌
``` C
int memcmp(void *s1, void *s2, size_t n);
```
s1과 s2가 가리키는 메모리 공간의 내용을 n byte만큼 비교
``` C
#include <stdio.h>
#include <mem.h>
void main(){
    char *s1="aaa";
    char *s2="bbb";
    int stat;
    stat = memcmp(s1,s2,3); // s1>s2 -> 양수, s1<s2 -> 음수, s1=s2 -> 0
    printf("%d", stat);
}
```

### memcpy()
메모리의 자료를 다른 메모리 영역으로 복사하기 위해 사용
 ``` C
 void *memcpy(void *dest, const void *src, size_t n);
 ```
 src 에서 n byte만큼 dest에 복사
 ``` C
 // 사용예시
 #include <stdio.h>
 #include <mem.h>
 #include <string.h>
 void main(){
    char src[]="1234567890";
    char dest[]="abcdefghijklmnopqrstuvwxyz"
    char *stat;
    printf("memcpy()실행 전 dest : %s\n", dest);
    stat = (char *)memcpy(dest,src,strlen(src));
    if(stat)
        printf("memcpy()실행 후 dest: %s\n", dest); // a~j 즉 10개의 부분이 1~0으로 변경됨
    else
        printf("복사실패");
 }
 ```

### memset()
메모리의 자료를 지정한 문자로 채우는 함수로 초기화나 내용삭제를 위해 사용함
``` C
void *memset(void *s, int c, size_t n);
```
포인터 s가 가리키는 곳을 c값으로 n byte만큼 채운다.
``` C
// 사용예시
#include <stdio.h>
#include <mem.h>
#include <string.h>
void main(){
    char s[]="12345667890";
    printf("memset() 실행 전 s: %s\n", s);
    memset(s, '*', strlen(s));
    printf("memset() 실행 후 s: %s\n", s); // **********

}
```