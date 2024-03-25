# 포인터
변수의 일종으로 특정 데이터가 저장된 메모리의 `주소값`을 갖고 있다.  
즉, 포인터는 메모리를 변수명으로 접근하지 않고 `주소로 접근하기 위해 사용`

``` C
// 변수의 주소 예시
#include <stdio.h>
void main(){
    int days=365;
    int month=12;
    int Table[5]={1,2,3,4,5};
    printf("days의 주소는 %x\n", &days);
    printf("month의 주소는 %x\n", &month);
    printf("배열명 Table의 주소는 %x\n", Table); // 배열명은 주소를 나타낸다.
    printf("배열명 Table의 첫번째 요소의 주소는 %x\n", &Table[0]);
    printf("배열명 Table의 첫번째 요소의 주소는 %x\n", &Table[1]);
}
```

## 선언
``` C
int *p;
```
`p` : 포인터변수로서 정수형 자료가 수록되어있는 `주소`를 갖고 있음  
`*p` : 해당 주소에 수록되어 있는 `자료`를 갖고 있음

``` C
// 사용 예시
int a,b;
int *p; // 변수 p를 포인터 변수로 선언
a=5000;
p=&a; // a의 메모리 주소를 p에 할당해줌
b=*p; // p의 값 5000을 b에 할당해줌
```

## 참조
``` C
// 참조 예시
#include <stdio.h>
void main(){
    int *p,i=3,j;
    p=&i; // i의 메모리 주소를 p에 할당
    j=*p; // p의 값 3을 j에 할당
    j++; // j의 값 증가
    printf("*p = %d\n",*p); // 3
    printf("p = %x\n", p); // 메모리주소
    printf("j = %d\n", j); // 4
}
```

## void형 포인터
저장하기전에 `명시적 형변환`이 필요하다.
``` C
#include <stdio.h>
void main(){
    int a = 100;
    char b = 'b';
    void *p = NULL; // void형 포인터 선언
    p=(int*)&a; // a의 주소값 할당, 정수형임을 표현해줘야함
    printf("*p = %d\n", *(int*)p); // 100
    p=(char*)&b; // b의 주소값 할당, 문자형임을 표현해주어야함
    printf("*p = %c\n", *(char*)p); // b
}
```

## 연산
`int형의 경우` : 포인터를 1증가시키면 실제주소는 4byte가 증가한다  
`char형의 경우` : 포인터를 1증가시키면 실제주소는 1byte가 증가한다

``` C
// 연산 예시 1
int a[10], *p, *q;
p=&a[2] // a의 3번째 원소의 주소값 할당
q=p+3 // a의 4번째 원소, a[5]의 주소값 할당

// 연산 예시 2
int a[10], *p, *q;
p=&a[7] // a[7]의 주소값 할당
q=p-3 // a[4]의 주소값 할당
p=p-5  // a[2]의 주소값 할당
```

``` C
// 포인터 연산 예시
#include <stdio.h>
void main(){
    int *p, a[]={10,20,30,40,50};
    p=&a[0];
    printf("*p == %d\n", *p); // 10
    printf("*p++ == %d\n", *p++); // 10
    printf("*++p == %d\n", *++p); // 30
    p=p+2;
    printf("*p == %d\n", *p); // 50
    printf("a[2] == %d\n", a[2]); // 30
    printf("*p+2 == %d\n", *p+2); // 52
}
```

## char형 포인터
문자열 처리를 위해 사용한다  
``` C
char *cp = "COMPUTER" // cp는 문자열의 시작주소를 갖는다.
```

``` C
// 사용 예시
#include <stdio.h>
void main(){
    char *cp = "COMPUTER";
    int i=0;
    do
        printf("*(cp+%d) = %c\n", i, *(cp+i));
    while(*(cp+i++) != 0);
}
```

## 포인터와 배열의 관계
포인터를 이용하여 배열을 `참조`할 수 있다
- 배열은 메모리를 고정적으로 확보한다. 그와 달리 포인터는 메모리를 유동적으로 확보함

### 1차원 배열
``` C
// 사용 예시
#include <stdio.h>
void main(){
    static int a[] = {10,20,30,40,50};
    int *pt, b, c, d;
    pt=a; // a[0]의 주소를 pt에 할당
    b=*pt + *(pt+3); // 50
    pt++; // a[1]
    c=*pt+*(pt+3); // 70
    d=*pt+3; // 23
    printf("b=%d, c=%d, d=%d",b,c,d);
}
```

### 2차원 배열
``` C 
// 사용예시
#include <stdio.h>
void main()
{
    static a[3][3] = {{1,2,3},{4,5,6},{7,8,-9}};
    int *pt;
    pt=a[0]; // a의 첫번째 행의 주소 할당, a[0][0]의 주소
    whilte(*pt != -9){
        printf("%d",*pt);
        pt++;
    }
}
```

### 포인터와 배열의 호환
``` C
// 사용예시
#include <stdio.h>
void main()
{
    char A[] = "ARRAY";
    char *p = "POINTER";
    int i;
    for (i=0; i<5; i++)
        printf("*(A+%d):%c\n",i,*(A+i));
    for (i=0;i<7;i++)
        printf("p[%d]:%c\n",i,p[i]);
}
```

## 포인터 배열
포인터가 여러개 사용될 때 포인터 배열로 선언함.  
- `주로 문자열 배열` 처리에 사용된다.  
- 2차원 배열에 비해 메모리를 효율적으로 사용할 수 있음

### 선언
``` C
// 사용예시
char *PA[4];
PA[0]="ELECTRONICS"; // E의 메모리 주소가 할당됨
PA[1]="DATA"; // D의 메모리 주소가 할당됨
PA[2]="PROCESSING"; // P의 메모리 주소가 할당됨
PA[3]="SYSTEM"; // S의 메모리 주소가 할당됨

// 2차원 배열로 하면 48의 공간을 차지하는데 포인터 배열을 통해 35의 기억공간만 차지함
```

``` C
// 포인터 배열의 사용 예시
#include <stdio.h>
void main(){
    int a[] = {1,2,3,4};
    int b[] = {5,6,7,8};
    int *PA[2];
    PA[0]=a;
    PA[1]=b;
    printf("*(PA[0]) = %d\n", *(PA[0])); // 1
    printf("*(PA[0]+1) = %d\n", *(PA[0]+1)); // 2
    printf("*PA[1] = %d\n", *PA[1]); // 5
    printf("*PA[1] + 15 = %d\n", *PA[1]+15); // 20
}
```

## 이중 포인터
자료가 있는 곳을 이중으로 가리키는 포인터, `Pointer to pointer`

### 선언
``` C
int **p;
```
`p` : 기억공간 주소  
`*p` : 주소 P에 수록되어 있는 값, 이 값이 `주소`로 사용됨  
`**p` : *p인 곳에 수록되어 있는 값, 즉 `자료`를 의미함

``` C 
// 사용예시
#include <stdio.h>
void main(){
    char a='A', *p, **pp;
    p = &a; // a의 주소값 할당
    pp = &p; // p의 주소값 할당
    printf("**p=%c", **pp); // A
}
```