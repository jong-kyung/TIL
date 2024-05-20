#include <stdio.h>

struct Person
{
    char *name;
    int age;
    char *address;
}

main()
{
    struct Person *p, a[5] = {{"홍길동", 23, "서울시 강남구 역삼동"}, {"김철수", 30, "서울시 강북구 번동"}, {"이영희", 25, "서울시 강남구 논현동"}, {"박민수", 28, "서울시 강남구 역삼동"}, {"정수민", 27, "서울시 강남구 역삼동"}}; // 구조체 배열 a 선언 및 초기화

    p = a + 4; // ptr이 a[4]를 가리키도록 설정

    for (int i = 0; i < 5; i++, p--)
    {
        printf("이름: %s, 나이: %d, 주소: %s\n", p->name, p->age, p->address); // 포인터 p가 가리키는 구조체 멤버 출력
    }
}