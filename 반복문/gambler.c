#include <stdio.h>
#include <stdlib.h>

int main() {
    int init_money = 50; //초기 금액
    int goal_money = 250; //목표 금액

    int wins = 0; //100 번의 시도 중에 이긴 횟수..(카운팅)

    for (int i = 0; i<100; i++) {
        int cash = init_money;
        while(cash > 0 && cash < goal_money) {
            if((double)rand()/RAND_MAX < 0.5) cash++; //RAND_MAX 는 난수의 최대값
            else
                cash--; 
        } 
        if (cash == goal_money) wins++;
    }
    printf("초기 금액 $%d\n", init_money);
    printf("목표 금액 $%d\n", goal_money);
    printf("100번 중에서 %d번 성공", wins);
    return 0;
}