# 공용체
`동일한 메모리`에 여러 유형의 자료를 저장하기 위한 자료형  
공용체가 사용될 때 `가장 큰 멤버`에 대해서만 기억공간이 할당된다.

## 공용체의 정의
```C
union var {
    char a;
    int b;
    float c;
};
``` 

## 공용체 변수의 선언
``` C
union var abc; // union 공용체명 변수명;
``` 

## 공용체 변수의 참조
``` C
union var {
    char a;
    int b;
    float c;
};
union var abc;
abc.a = 'A';
abc.b = 133;
abc.c = 1234.5678;
``` 