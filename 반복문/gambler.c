#include <stdio.h>
#include <stdlib.h>

int main() {
    int init_money = 50; //�ʱ� �ݾ�
    int goal_money = 250; //��ǥ �ݾ�

    int wins = 0; //100 ���� �õ� �߿� �̱� Ƚ��..(ī����)

    for (int i = 0; i<100; i++) {
        int cash = init_money;
        while(cash > 0 && cash < goal_money) {
            if((double)rand()/RAND_MAX < 0.5) cash++; //RAND_MAX �� ������ �ִ밪
            else
                cash--; 
        } 
        if (cash == goal_money) wins++;
    }
    printf("�ʱ� �ݾ� $%d\n", init_money);
    printf("��ǥ �ݾ� $%d\n", goal_money);
    printf("100�� �߿��� %d�� ����", wins);
    return 0;
}