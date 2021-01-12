#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int main(void)
{
    int freq[SIZE] = {0};
    //모든 요소 0으로

    //주사위를 10000번 던진다...
    for (int i =0; i < 10000; i++) {
        ++freq[rand()%6];
    }

    printf("====================\n");
    printf("면 빈도\n");
    printf("====================\n");

    for(int i =0; i<SIZE; i++)
        printf("%3d %3d \n", i+1, freq[i]);

    return 0;
}