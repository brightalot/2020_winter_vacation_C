//���� ���� ���α׷�
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 45
//�Ϲ������� [a,b]������ ������ �߻��Ϸ��� ������ ���� ������ ����Ѵ�.

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
