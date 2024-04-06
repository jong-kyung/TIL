#include <stdio.h>
void main()
{
    int A[3][3], B[3][3], C[3][3]; // 2차원 배열
    int i, j;

    printf("*** 첫번째 2차원 배열 A *** \n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &A[i][j]); // 2차원 배열 A에 값을 입력받는다.

    printf("\t ## A ## \n"); // \t: 탭
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", A[i][j]); // 2차원 배열 A에 저장된 값을 출력한다.
        printf("\n");
    }

    printf("*** 두번째 2차원 배열 B *** \n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &B[i][j]); // 2차원 배열 B에 값을 입력받는다.

    printf("\t ## B ## \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", B[i][j]); // 2차원 배열 B에 저장된 값을 출력한다.
        printf("\n");
    }

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            C[i][j] = A[i][j] + B[i][j]; // 2차원 배열 C에 2차원 배열 A와 2차원 배열 B의 값을 더한 값을 저장한다.

    printf("\t ## C ## \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", C[i][j]); // 2차원 배열 C에 저장된 값을 출력한다.
        printf("\n");
    }
}