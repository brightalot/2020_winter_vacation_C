#include <stdio.h>

int fact(int n) {
    long result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }   
     return result;
}

int main(void)
{
    int n;
    printf("�˰� ���� ���丮���� ����? :" );
    scanf("%d", &n);
    printf("%d!�� ���� %d�Դϴ�. \n" ,n, fact(n));
    return 0;
}