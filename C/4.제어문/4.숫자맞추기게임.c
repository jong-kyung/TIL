#include <stdio.h>
#include <stdlib.h>

void main()
{
    unsigned secret_num, guess_num, k, times = 1; // unsigned : 부호가 없는 정수
    unsigned again = 1, win = 0;
    char replay;

    printf("** Game Start **\n");
    while (again)
    {
        printf("\n-%u 번째 게임 - \n", times++); // %u: 부호없는 정수로 출력
        secret_num = rand() % 100;               // 0~99까지의 난수 생성, rand(): 0~2147483647까지의 난수 생성

        win = 0;
        k = 1;
        while (k++ <= 7) // 7번의 기회 존재
        {
            printf("0부터 99 사이의 수를 입력하세요 : ");
            scanf("%u", &guess_num);
            if (guess_num == secret_num)
            {
                win = 1;
                k = 8;
            }
            else if (guess_num < secret_num)
                printf("%u보다 큰 수 입니다.\n", guess_num);
            else
                printf("%u보다 작은 수 입니다.\n", guess_num);
        }
        if (win)
            printf("당신이 이겼습니다. 축하합니다.\n");
        else
            printf("당신이 졌습니다. 정답은 %u 입니다. 다시 시도하세요.\n", secret_num);

        printf("다시 하시겠습니까? (y/n) : ");

        getchar(); // 버퍼에 남아있는 엔터키(개행문자) 제거

        replay = getchar(); // y or n 입력받음
        if (!(replay == 'y' || replay == 'Y'))
            again = 0;
    }
    printf("** Good Bye **\n");
}