# 연산자
## 연산자의 종류
| 구분        | 연산자                               |
| ----------- | ------------------------------------ |
| 산술연산자  | +, -, *, /, %, ++, --                |
| 관계연산자  | >, <, >=, <=, ==, !=                 |
| 논리연산자  | &, !,                                |
| 대입 연산자 | +=, -=, *=, /=, %=, <<=, >>=, !=, &= |
| 조건 연산자 | ?:                                   |
| 비트연산자  | &,  ^, ~, <<, >>                     |
| 기타 연산자 | sizeof(), cast, &, *                 |

### 산술연산자

``` C
// 사용예시
#include <stdio.h>
void main(){
    int x,y;
    x=10;
    y=3;
    printf("x+y=%d\n", x+y); // x+y=13
    printf("x/y=%d\n", x/y); // x/y=3
    printf("x%%y=%d\n", x%y); // x%y=1
    printf("y%%x=%d\n", y%x); // x%y=3
}
```

``` C
// 단항연산자 사용예시
#include <stdio.h>
void main(){
    int x=5, a, b;
    a=++x*x--;;
    b=x*10;
    printf("a=%d b=%d x=%d", a, b, x); // a=36 b=50 x=5
}
```

### 관계연산자
``` C
// 사용예시
#include <stdio.h>
void main(){
    int a=4, b, c, d;
    b=a>2;
    printf("b=%d\n", b); // 참이므로 1
    c=a<2;
    printf("c=%d\n", c); // 거짓이므로 0
    d=a==4;
    printf("d=%d\n", d); // 참이므로 1
}
```

### 논리연산자
``` C
// 사용예시
#include <stdio.h>
void main(){
    int a=4, b=7, c, d, e;
    c=a>2 && b<=7;
    printf("c=%d\n", c); // 1
    d=a<2||b<=7;
    printf("d=%d\n", d); // 1
    e=!a;
    printf("e=%d\n", e); // 0
}
```

### 대입연산자
``` C
// 사용예시
#include <stdio.h>
void main(){
    int a=10, b=3, c=1;
    a*=(b-1);
    b/=2+3;
    c+=2;
    printf("a=%d b=%d c=%d\n", a, b, c); // a=20 b=0 c=3
}
```

### 조건연산자
``` C
// 사용예시
#include <stdio.h>
void main(){
    int a=10, b;
    b=(a>15)? (a+1):(a-1);
    printf("b=%d\n", b); // b=9
}
```

### 기타연산자
``` C
// sizeof()사용예시
#include <stdio.h>
void main(){
    float a=3.14;
    printf("int형의 크기는=%d바이트\n", sizeof(int)) // 4바이트
    printf("float형의 크기는=%d바이트\n", sizeof(a)) // 4바이트
}
```

``` C
// 강제 형변환 사용예시
#include <stdio.h>
void main(){
    int a=3, b=4;
    double c;
    c = (double)a/b;
    printf("나눗셈 결과: %f\n", c) // 0.750000
}
```
