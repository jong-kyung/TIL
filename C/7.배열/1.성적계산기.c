#include <stdio.h>
#define N 10

void input(int scr[], int size);
int sum2(int scr[], int size);
void sort(int scr[], int size);

void main()
{
    int score[N] = {0}; // 배열 초기화, N개의 배열 선언
    int j, sum;         // 합계
    float average;      // 평균

    input(score, N);          // 입력
    sum = sum2(score, N);     // 합계 계산
    average = (float)sum / N; // 평균 계산
    printf("평균 : %f\n", average);

    sort(score, N); // 정렬
    printf("성적순 :");
    for (j = 0; j < N; j++)
        printf("%d ", score[j]);
    printf("\n");
}

void input(int scr[], int size) // 입력함수
{
    int j;
    for (j = 0; j < size; j++)
    {
        printf("%d번째 성적을 입력하시오 : ", j + 1);
        scanf("%d", &(scr[j])); // 포인터로 배열의 주소값을 넘겨줌
    }
}

int sum2(int scr[], int size) // 합계함수
{
    int sum, j;
    for (sum = 0, j = 0; j < size; j++)
        sum += scr[j];
    return sum;
}

void sort(int scr[], int size) // 정렬함수
{
    int j, k, temp;
    for (j = 0; j < size - 1; j++)
    {
        for (k = size - 1; k > j; k--) // 큰 수부터 정렬
        {
            if (scr[k - 1] > scr[k])
            {
                temp = scr[k - 1];
                scr[k - 1] = scr[k];
                scr[k] = temp;
            }
        };
    }
}