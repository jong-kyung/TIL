#include <stdio.h>

#define program void main() // 매크로명 program으로 void main()치환
#define print printf        // print로 printf 치환
#define MAX 100             // MAX값으로 100 치환
#define MIN 10              // MIN값으로 10 치환

program
{
    print("MAx:%d MIN:%d\n", MAX, MIN);
}