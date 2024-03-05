# 표준 입출력 함수
## 표준 출력함수
### printf()
화면에 `여러 종류의 자료`를 출력

``` C
// 사용예시
#include <stdio.h>
void main() {
    char c='A';
    int i=10, j=20, k=30;
    printf("간단한 출력 프로그램 \n");
    printf("c=%c, c의 아스키 코드 값은 %d\n", c, c); // c=A, c의 아스키 코드 값은 65
    printf("i=%d, j=%d, k=%d", i, j, k); // i=10, j=20, k=30
}
```

### putchar()
화면에 `1개의 문자` 출력

``` C
// 사용예시
#include <stdio.h>
void main() {
    char var='A';
    purtchar(var);
    purtchar(var+1); // B(아스키 코드 66인 문자)
    purtchar('\n');
    purtchar('K');
    purtchar('K'+2); // M
    purtchar('\007'); // \a -> 경고음
}
```

### puts()
화면에 `문자열` 출력

``` C
// 사용예시
#include <stdio.h>
void main() {
    char s1[] = "Computer"
    char s2[] = "Science"
    puts(s1); // Computer (줄바꿈이 된다)
    puts(s2); // Science
    printf("%s", s1); // 줄바꿈이 되지 않음
    printf("%s", s2);
}
```

## 표준 입력함수
### scanf()
키보드를 통해 `여러 종류의 자료`를 입력

``` C
// 사용예시
#include <stdio.h>
#pragma warning(disable:4996) // 권장하지 않는 함수 사용에 대한 경고 메시지 무시
void main() {
    int jsu1, jsu2;
    float ssu1, ssu2;
    printf("\n정수를 입력하시오");
    sacnf("%d %d", &jsu1, &jsu2);
    printf("\n실수를 입력하시오");
    sacnf("%f %f", &ssu1, &ssu2);
    printf("\n정수는 %d %d\n", jsu1, jsu2);
    printf("실수는 %f %f\n", ssu1, ssu2);
}
```

### getchar()
키보드를 통해 `1개의 문자`를 입력

``` C
// 사용예시
#include <stdio.h>
void main() {
    char a;
    printf("문자 하나를 입력하세요\n");
    a=getchar():
    printf("a=%c\n", a);
}
```

### gets()
키보드를 통해 `문자열`을 입력

``` C
// 사용예시
#include <stdio.h>
#pragma warning(disable:4996)
void main() {
    char s[50]; // 문자열 저장을 위해 배열명 s인 배열 선언
    printf("문자열 입력?");
    gets(s); // 서울 서초구
    printf("gets()로 문자열 입력 = %s\n", s); // 서울 서초구
    scanf("%s, s");  // 서울 서초구
    printf("scanf()로 문자열 입력 = %s\n", s); // 서울
}
```


## 서식 지정자
| 서식 지정자 | 출력 데이터 형태    | 인자의 자료형    |
| ----------- | ------------------- | ---------------- |
| %d          | 부호 있는 10진 정수 | 정수형, 문자형   |
| %u          | 부호 없는 10진 정수 | 정수형, 문자형   |
| %f          | 부동 소수점 형식    | 실수형           |
| %e, %E      | 지수형태            | 실수형           |
| %c          | 한 문자             | 정수형, 문자형   |
| %s          | 문자열              | 문자열 포인터    |
| %o          | 부호 없는 8진수     | 정수형, 문자형   |
| >           | %x, %X              | 부호 없는 16진수 | 정수형, 문자형 |

## 출력 양식의 편집
```C
// 편집 예시
#include <stdio.h>
void main(){
    printf("|%d|\n", 123); // |123|
    printf("|%5d|\n", 123); // |  123|
    printf("|%-5d|\n", 123); // |123  |
    printf("|%05d|\n", 123); // |00123|
    printf("|%6.1f|\n", 123); // | 123.5|
    printf("|%07.2f|\n", 123); // |0123.45|
}
```