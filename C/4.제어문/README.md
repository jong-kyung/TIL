# 제어문
## 선택 제어문
### if 문
1. if 문
``` C
// 사용예시
#include <stdio.h>
void main(){
    int a=10, b=20;
    if(a>b){
        a=a+20;
        printf("a=%d\n",a);
    }
    b=b+20;
    printf("b=%d",b);
}
```

2. if ~ else문
``` C
// 사용예시
#include <stdio.h>
#pragma warning(disable:4996)
void main(){
    int a, b, max;
    if(a>=b)
        max=a;
    else
        max=b;
    printf("max=%d",max);
}
```

3. 다중 if ~ else문
``` C
// 사용예시
#include <stdio.h>
#pragma warning(disable:4996)
void main(){
    int a;
    scanf("%d", &a);
    if(a>=0)
        if(a==0)
            printf("입력된 값은 0");
        else
            printf("입력된 값은 양수");
    else
        printf("입력된 값은 음수");
}
```

4. 다중 if ~ else if ~ else문
``` C
// 사용예시
#include <stdio.h>
#pragma warning(disable:4996)
void main(){
    int score;
    printf("성적 입력:")
    scanf("%d", &score);
    if(score>=90)
        printf("학점은 A\n");
    else if(score>=80)
        printf("학점은 B\n");
    else if(score>=70)
        printf("학점은 C\n");
    else if(score>=60)
        printf("학점은 D\n");
    else
        printf("학점은 F\n");
}
```
### switch ~ case 문
1. break 미사용
``` C
// 사용예시 (break 미사용)
#include <stdio.h>
#pragma warning(disable:4996)
void main(){
    int n;
    printf("n=?");
    scanf("%d", &n);
    printf("\n n%%5= %d\n", n%5);
    switch(n%5){
        case 0: printf("나머지는 0\n");
        case 1: printf("나머지는 1\n");
        case 2: printf("나머지는 2\n");
        default: printf("나머지는 3이나 4\n");
    }
}
```

2. break 사용
``` C
// 사용예시 (break 사용)
#include <stdio.h>
#pragma warning(disable:4996)
void main(){
    int n;
    printf("n=?");
    scanf("%d", &n);
    printf("\n n%%5= %d\n", n%5);
    switch(n%5){
        case 0: printf("나머지는 0\n");
        break;
        case 1: printf("나머지는 1\n");
        break;
        case 2: printf("나머지는 2\n");
        break;
        default: printf("나머지는 3이나 4\n");
        break;
    }
}
```


### goto 문
프로그램 수행 도중에 원하는 곳으로 제어를 `무조건`적으로 옮긴다
``` C
// 사용예시
#include <stdio.h>
#pragma warning(disable:4996)
void main(){
    int i, n, c='A';
    while(1){
        printf("\n 횟수는 ?");
        scanf("%d" &n);
        for (i=1; i<=n; i++>){
            printf("%c", c);
            if(c=='Q')
                goto end; // end로 무조건 실행을 옮김
            c++;
        }
    }
    end: // 레이블 명 다음에는 콜론(:)을 붙여야함
        printf("\n\n 끝")
}
```

> ### goto문이 사용 될 수 없는 경우
> 1. ex)바깥에서 조건문 내의 레이블 혹은 반복문 내의 레이블로 이동하는 경우  
> 2. ex)특정 조건문 혹은 반복문 안에서 또 다른 조건문 혹은 반복문으로 이동하는 경우

## 반복 제어문
### for문
``` C
// 사용예시
#include <stdio.h>
void main(){
    int i, sum=0;
    for(i=0;i<=10,++i)
        sum=sum+i;
    printf("1부터 %d까지의 합=%d", i-1, sum);
}
```

### while문
``` C
// 사용예시
#include <stdio.h>
void main(){
    int i=0;
    int sum=0;
    while(i<=100){
        sum=sum+i;
        i++;
    }
    printf("1부터 100까지의 합=%d", sum);
}
```

### do ~ while문
while문과 달리, 조건 검사를 나중에 실행함
``` C
// 사용예시
#include <stdio.h>
#pragma warning(disable:4996)
void main(){
    int i=0, n;
    int sum=0;
    printf("n=?");
    scanf("%d", &n);
    do {
        sum=sum+i;
        i++;
    } while(i<=n); // 세미콜론(;)누락시 에러 발생
    printf("i=%d\n",i)
    printf("i ~ %d까지의 합=%d", n, sum);
}
```

## 기타 제어문
### break문
- 반복 명령의 실행 도중 `강제적`으로 반복문을 빠져 나오는데 사용
- `자신이 포함`된 반복문만 빠져 나옴
``` C
// 사용예시
#include <stdio.h>
#pragma warning(disable:4996)
void main(){
    int num, sum;
    while(1){
        printf("num(끝:0)...?");
        scanf("%d", &num);
        if(num==0)
            break;
        sum=sum+num;
    }
    printf("\n sum = %d", sum);
}
```

### continue문
- 루프 실행 중 루프를 `다시 실행`하고자 할 때 사용, 반복구조에만 사용됨
- 루프의 선두로 제어를 옮겨 다음 반복을 실행
``` C
// 사용예시
#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
void main(){
    int num=1;
    while(num!=0){
        printf("\n num=?");
        scanf("%d", &num);
        if(num<0){
            printf("0: Negative Number !\n")
            continue;
        }
        printf("Square root of %d =%f\n", num, sqrt(num));
    }
    printf("\n\n The end");
}
```
