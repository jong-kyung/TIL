#include <stdio.h>

void main()
{
    static int data[100]; // 1차원 배열 선언
    int i, j, N;
    printf("입력할 데이터의 개수를 입력하시오: ");
    scanf("%d", &N); // 데이터의 개수 입력

    for (i = 0; i < N; i++)
        scanf("%d", &data[i]); // 배열의 각 요소에 데이터 입력

    for (i = 0; i < N - 1; i++)
        for (j = i + 1; j < N; j++)
        {
            if (data[i] > data[j]) // XOR 연산을 이용한 오름차순 정렬
            {
                data[i] ^= data[j];
                data[j] ^= data[i];
                data[i] ^= data[j];
            }
        }

    printf("정렬된 데이터 : \n");
    for (i = 0; i < N; i++)
        printf("%10d ", data[i]); // 정렬된 데이터 출력
    if ((i + 1) % 7 == 0)         // 7개씩 출력
        printf("\n");
}