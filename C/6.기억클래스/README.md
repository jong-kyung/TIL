# 기억클래스
### 자동 변수 
- 예약어 `auto`를 사용(생략가능)
- 생략이 가능함
- 통용 범위는 변수가 선언된 `블록이나 함수 내`로 한정
- 지역변수에 해당
- `초기화가 필요`

``` C
// 사용예시
#include <stdio.h>
void main(){
    int i=1; // 자동변수 선언(auto 생략)
    auto int j=2; // 자동변수 선언
    {
        int i=3;
        {
            inti=4;
            printf("블록 2의 i=%d \n",i);
            printf("블록 2의 j=%d \n",j);
        }
        printf("블록1의 i = %d \n", i);
    }
    printf("void main() 함수 내의 i=%d\n",i);
}
```

### 정적 변수 
- 예약어 `static` 사용
- 전역 변수에 해당
- `변수의 값은 프로그램 실행 중 계속 유지`
- 초기화가 없으면 0 으로 초기화 됨

``` C
// 사용예시
#include <stdio.h>
void main(){
    int a=10; // 자동 변수 선언
    static int b=20; // 정적변수 선언
    {
        int a=5;
        printf("a=%d b=%d\n",a,b);
    }
    printf("a=%d b=%d\n",a,b);
}
```

### 외부 변수
- 함수의 외부에서 선언
- 예약어 `extern`을 사용
- 전역 변수에 해당
- 초기화가 없으면 0으로 초기화 됨
- `다른 파일에서 외부변수로 선언된 변수의 값을 참조할 수 있다`

``` C
// 사용 예시 (test-1.c) 
#include <stdio.h>
extern char s[];
void extern_ex(){
    printf("외부 변수 s값은 %s입니다. \n", s);
};
```

``` C
// 사용 예시 (test.c) 
#include <stdio.h>
#pragma warning(disable:4996)
void extern_ex();
char s[100];
void main(){
    printf("문자열을 입력하세요:")
    scanf("%s", s);
    printf("입력 문자열은 %s는 전역변수 s에 저장 \n", s);
    extern_ex();
}
```

### 레지스터 변수
- CPU내의 `레지스터`에 자료를 저장하고자 할 떄
- 예약어 `register`를 사용
- 자동 변수와 동일한 속성
- 프로그램의 `실행속도 증가`를 목적으로 사용

``` C
void main() {
    register int i; // register 변수 선언
    int sum=0; 
    for (i=0;i<=10,++i)
        sum+=i;
    i-=1;
    printf("i=%d sum= %d",i,sum);
}
```