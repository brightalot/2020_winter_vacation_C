#include <stdio.h>

int main() {
    int number;
    printf("정수를 입력하시오 : ");
    scanf("%d", &number); //25
    if(number > 0)
        printf("양수입니다. ");

    printf("입력된 값은 %d입니다.\n", number); //if 문이 실행된 후에 항상 실행된다.
        //입력된 값은 25입니다.
    return 0;
}
