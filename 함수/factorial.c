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
    printf("알고 싶은 팩토리얼의 값은? :" );
    scanf("%d", &n);
    printf("%d!의 값은 %d입니다. \n" ,n, fact(n));
    return 0;
}