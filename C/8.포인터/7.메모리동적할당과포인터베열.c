#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TOTAL 5
void main()
{
    char *song[10];   // 문자열을 저장할 포인터 배열
    char newSong[80]; // 새로운 문자열을 저장할 배열

    for (int i = 0; i < TOTAL; i++)
    {
        printf("최애 노래 순위 #%d:", i + 1);
        gets(newSong);                                                // 문자열 입력
        song[i] = (char *)malloc(strlen(newSong) + 1 * sizeof(char)); // 문자열 길이만큼 메모리 할당 strlen(newSong) + 1 : NULL 문자를 포함하기 위해 1을 더 해준다
        strcpy(song[i], newSong);                                     // 입력받은 문자열을 song[i]에 복사
    }
    printf("입력한 노래는 다음과 같습니다.\n");
    for (int i = (TOTAL - 1); i >= 0; i--)
    {
        printf("노래 #%d: %s\n", i + 1, song[i]);
        free(song[i]); // 동적할당한 메모리 해제
    }
}