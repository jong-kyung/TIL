# 구조체(structure)
`서로 다른 자료형`을 갖는 자료들의 모임을 `하나의 자료형으로 정의`하여 사용하는 자료형으로 즉 사용자가 정의하는 자료형이다.

## 구조체 정의
``` C
struct score{ // struct라는 예약어를 통해 score라는 구조체 선언
    int kor; // 멤버선언
    int eng; 
};
```

## 구조체 변수의 선언
``` C
struct score x, y[10], *z; // struct 구조체명 변수명1, 변수명2, 변수명3;
```

``` C
// 사용 예시1
struct score { // 구조체 정의
    char no[4]; // 학번
    char name[8]; // 이름
    int kor; // 국어
    int eng; // 영어
    int math; // 수학
    int hist; // 역사
};
struct score X, Y; // 구조체 변수 X,Y 선언
```

``` C
// 사용 예시2
struct score { 
    char no[4]; 
    char name[8];
    int kor; 
    int eng; 
    int math;
    int hist; 
} X, Y; // X,Y 는 struct score의 구조체변수
```

``` C
// 사용 예시3
typedef struct score { 
    char no[4]; 
    char name[8];
    int kor; 
    int eng; 
    int math;
    int hist; 
} jumsu; // struct score를 jumsu라는 새로운 자료형으로 정의
jumsu X, Y;
```

## 구조체 변수의 초기화
``` C
struct person{
    char name[8];
    int age;
    char sex;
};
struct person X={"홍길동", 20, 'M'};
```

## 구조체 멤버의 참조
``` C
// 예시
#include <stdio.h>
#include <string.h>
struct person{
    char name[8];
    int age;
    char sex;
};
void main() {
    struct person X={"홍길동", 30, 'M'}; // 구조체변수 X선언과 초기화
    struct person Y; // 구조체변수 Y선언
    strcpy(Y.name, "김진로") // 구조체 멤버에 값 대입, 문자열 처리를 위해 문자열복사함수 strcpy()사용
    Y.age=35;
    Y.sex='M';
    printf("X의 정보: %s, %d, %c\n", X.name, X.age, X.sex);
    printf("Y의 정보: %s, %d, %c\n", Y.name, Y.age, Y.sex);
}
```

## 구조체 배열
동일한 구조를 갖는 구조체 변수가 여러개 사용될 때 대표하는 배열명을 설정하여 일반 배열과 같이 사용
``` C
struct person{
    char name[8];
    int age;
    char sex;
};

struct person X[3]; // 3명의 정보를 저장하기 위한 구조체 배열 선언
```

### 구조체 배열 초기화
``` C
struct person X[3] = {
    {"홍길동",20,'M'},
    {"김서울",30,'F'},
    {"박한국",25,'M'},
}
```

## 구조체 포인터
### 구조체 포인터 선언
``` C
struct person{
    char name[8];
    int age;
    char sex;
};
struct person man;
strcut person *pt; // 구조체 포인터 변수 선언
pt=&man; // man의 주소값을 할당
```

### 구조체 포인터의 멤버 참조
도트 연산자 혹은 포인터 연산자 사용
``` C
#include <stdio.h>
struct student {
    char name[10];
    int kor;
    int math;
}
void main() {
    strcut student hs[4] = {
        {"KIM HG", 90, 95}
        {"LEE SY", 85, 90}
        {"PARK GS", 70, 85}
        {"CHOI HJ", 95, 75}
    }
    struct student *p; // 구조체 포인터 선언
    p=hs; // 포인터 배열의 시작주소 할당
    printf("%s %d %d \n", p->name, p->kor, p->math); // KIM HG
    p+=3;
    printf("%s %d %d \n", p->name, p->kor, p->math); // CHOI HJ
    p--;
    printf("%s %d %d \n", p->name, p->kor, p->math); // PARK GS
}
```

## 함수와 구조체
### 구조체를 함수의 매개변수로 사용
``` C
struct num calc(struct num number2)
```
`반환 자료형`이 struct num형인 구조체이고  struct num형의 구조체를 `매개변수`로 갖는 함수
### 구조체 포인터를 함수의 매개변수로 사용
구조체를 복사하지 않기 때문에 실행속도가 향상되고 메모리 사용효율도 좋다
``` C
struct num calc(struct num*);
```

### typedef
이미 존재하는 자료형에 새로운 이름을 붙이기 위한 키워드
``` C
typedef unsigned int BYTE; // unsigned int형을 BYTE라는 새로운 이름으로 정의
BYTE val;
```

## 구조체의 비트필드
메모리를 byte단위가 아닌 `bit` 단위로 사용
``` C
struct test {
    unsigned short a:4;
    unsigned short b:2;
    unsigned short c:1;
    unsigned short d:7;
};
struct test bit; // 구조체 비트필드 변수의 선언
```
> **주의사항**
> - 비트필드의 자료형은 int나 unsigned로 선언되어야 함
> - 비트필드에 대한 포인터나 배열은 사용 안됨
> - 비트필드의 전체크기는 시스템이 제공하는 int의 크기 이내여야 함