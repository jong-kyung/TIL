#include <stdio.h>

struct student
{
    char name[20];
    int kor;
    int eng;
    int math;
    int total;
    float avg;
};

void main()
{
    struct student score[3]; // 구조체 배열 score 선언

    for (int i = 0; i < 3; i++)
    {
        printf("이름: ");
        scanf("%s", score[i].name); // 이미 배열의 시작 주소를 가리키고 있기 때문에 &(주소 연산자)를 붙이지 않는다.
        printf("국어: ");
        scanf("%d", &score[i].kor);
        printf("영어: ");
        scanf("%d", &score[i].eng);
        printf("수학: ");
        scanf("%d", &score[i].math);
        score[i].total = score[i].kor + score[i].eng + score[i].math;
        score[i].avg = (float)score[i].total / 3;
        printf("이름: %s, 국어: %d, 영어: %d, 수학: %d, 총점: %d, 평균: %.2f\n", score[i].name, score[i].kor, score[i].eng, score[i].math, score[i].total, score[i].avg); // .2f : 소수점 둘째 자리까지 출력
    }
}
