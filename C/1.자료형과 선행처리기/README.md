# 자료형
## 상수와 변수
1. 상수: 항상 고정된 값을 갖는 자료
   1. 정수형 상수: 10진수, 8진수, 16진수로 표현
   2. 실수형 상수: 부동소수점형 상수, double형을 기본 자료형으로 사용
   3. 문자형 상수: `단일 인용부호('')`로 묶여 있는 문자, 내부적으로 아스키 코드 값이 사용, Escape 문자
   4. 문자열 상수: `이중 인용부호("")`로 묶여 있는 복수개의 문자, 기억 공간에 보관될때는 문자열 끝에 null 문자(\0)가 추가됨
2. 변수: 변할 수 있는 값, 변할 수 있는 값이 저장되는 기억공간

## 자료형의 종류
- `기본형`
  1. 정수형: int, short, long, unsigned
  2. 실수형: float, double, long double
  3. 문자형: char, unsigned char
  4. 열거형: enum
  5. 형 없음: void
- `확장형`
  1. 배열형
  2. 함수형
  3. 포인터형
  4. 구조체형

# 선행처리기
컴파일에 앞서 프로그램 선두에 선언된 지시자들을 미리 처리하는 역할을 수행
## `#include`
파일 포함 선행처리기  
C언어에서 제공되는 헤더 파일(*.h)을 자신의 소스파일에 읽어 들여 함께 컴파일 하고자 할때 사용

> printf(), scanf() 등을 사용하려면 stdio.h를 #include시켜야 함.

``` C
// 사용 예시
#include <stido.h>
#include "\tc\lib\math.h"
```

## `#define`
매크로 정의 선행처리기
단순 치환되는 자료

### 매크로 상수 정의
``` C
// 사용 예시
#define PI 3.141592
#define ADDR "서울시 서초구"
```

### 매크로 함수 정의
``` C
// 사용 예시
#define AREA(x) (3.141592*(x)*(x))
#define SUM(a,b) (a+b)
```

## `#if #else #elif #endif`
조건부 컴파일 선행처리기
``` C
// 사용 예시
#include <stido.h>
#define CONDITION 1
void main() {
  #if CONDITION
    printf("\n A 프로그램을 컴파일");
  #else
    printf("\n B 프로그램을 컴파일");
  #endif
}
```