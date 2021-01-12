#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

void disp_car(int car_number, int distance)
{
    int i;

    printf("CAR #%d:", car_number);
    for(i=0; i < distance/10; i++)
        printf("*");
    printf("\n");
}
int main(void) {
    int i;
    int car1_dist=0, car2_dist=0;

    srand( (unsigned)time(NULL));

    for(i = 0; i < 6; i++) {
        car1_dist += rand()%100;  //난수의 범위 0~99
        car2_dist += rand()%100;
        disp_car(1, car1_dist);
        disp_car(2, car2_dist);
        printf("--------------------\n");
        _getch(); //사용자가 아무 키나 누르기를 기다린다.
    }
    return 0;
}