//난수 생성 프로그램
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 45
//일반적으로 [a,b]구간의 난수를 발생하려면 다음과 같은 수식을 사용한다.

//printf("%d ", a+rand()%(b-a+1));

int main() {
    int i;

    srand( (unsigned)time( NULL ) );

    for (i = 0; i < 6; i++) {
        printf("%d ", 1+rand()%MAX);
    }
    printf("\n");
    return 0;
}
