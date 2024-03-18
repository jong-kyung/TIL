# 함수
C 프로그램은 함수들로 구성된다.

## 특징
1. 함수들은 서로를 자유로이 호출 가능
2. 모든 함수는 서로 독립적

## 표준 함수
C언어 자체에서 제공하는 함수
- `표준함수의 원형`은 헤더파일에 정의 (*.h)
- `표준함수의 실체`는 라이브러리 파일에 수록
- `표준함수를 사용하려면` 원형이 선언되어 있는 헤더파일을 `#include` 시켜 주어야 한다.

### 표준함수의 원형 예시
1. printf(), scanf() 함수의 원형 (stdio.h)
2. sin(), cos() 함수의 원형 (math.h)

### 표준함수의 사용 예
``` C
// 사용예시 1
#include <stdio.h>
#include <math.h>
void main(){
    double x=12.34;
    int i=-5, j=2;
    int a,b,c;
    a=ceil(x);
    b=floor(x);
    c=pow(4,j);
    printf("abs(-5)=%d\n", abs(i)); // abs(x): x의 절댓값
    printf("ceil(12.34)=%d\n", a); // ceil(x): x 이상의 최소 정숫값
    printf("cos(10)=%f\n", cos(10)); 
    printf("exp(2)=%.f\n", exp(j)); // exp(x): x의 지숫값
    printf("floor(12.34)=%d\n", b); // floor(x) x 미만의 최대 정숫값
    printf("sqrt(2)=%5f\n", sqrt(j));
    printf("pow(4,2)=%d\n", c); //  pow(x,y): x의 y제곱 값
}
```

``` C
// 사용예시 2
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main(){
    int i, alp=0, no=0, et=0;
    char s[20]
    printf("문자");
    scanf("%s", s);
    for (i=0;i<strlen(s);i++){ // strlen(): 문자열 길이
        if(isalpha(s[i])) // isalpha(): 영문자 여부 
            alp++;
        else if(isdigit(s[i])) // isdigit(): 숫자 여부
            no++;
        else
            et++;
    }
    printf("알파벳 = %d\n", alp);
    printf("숫자 = %d\n", no);
    printf("기타 = %d\n", et);
}
```

## 사용자 정의 함수
사용자가 정의하여 사용하는 함수  
함수의 원형선언은 일반적으로 `main()함수 이전`에 한다.
> 만약, 사용자 정의 함수가 main() 함수 이전에 작성되어 있으면 원형선언을 해주지 않아도 된다.

### 형태
> 반환자료형 함수명 (자료형 매개변수1, 자료형 매개변수2)

``` C
// 사용예시
#include <stdio.h>
int sum(int a, int b); // 함수의 원형선언
void main(){
    int x, y, c;
    scanf("%d %d", &x, &y);
    // 중간 생략
    c=sum(10,20);
    printf("%d", c);
}
// 사용자 정의 함수
int sum (int a, int b){
    int d; 
    d=a+b;
    return(d);
}
```

## 매개변수 사이의 자료전달
### 값에 의한 자료전달
- 실 매개변수와 형식 매개변수 사이에 값의 전달
- 호출한 함수의 실행이 끝난 다음 전달받은 값을 `되돌려 받지는 못한다.`

### 참조에 의한 자료 전달
- 호출함수와 피 호출함수의 매개변수 값을 `서로 교환`할 수 있다.
- 값을 전달하는 것이 아니라 `실 매개변수의 값이 들어있는 주소 값`이 전달된다.

``` C
fcn1(&a,*b); // 실 매개변수 & -> 주소 연산자

int fcn1(int *x, int *y); // 형식 매개변수 *-> 내용 연산자
```