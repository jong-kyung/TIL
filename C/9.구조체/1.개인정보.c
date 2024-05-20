// 구조체와 공용체의 차이점은
// 구조체는 각 멤버가 각각의 메모리 공간을 가지고 있지만
// 공용체는 모든 멤버가 같은 메모리 공간을 공유한다.

#include <stdio.h>
#include <string.h>

struct Person
{
    char name[20];
    char phone[20];
    char address[100];
};

void main()
{
    struct Person info; // 구조체 변수 info 선언

    strcpy(info.name, "홍길동");
    strcpy(info.phone, "010-1234-5678");
    strcpy(info.address, "서울시 강남구 역삼동");

    printf("이름: %s\n", info.name);
    printf("전화번호: %s\n", info.phone);
    printf("주소: %s\n", info.address);
}