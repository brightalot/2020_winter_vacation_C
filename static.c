#include <stdio.h>

void sub() {
    static int scount = 0; 
    //���� ������ ����Ǿ���. �Լ��� ����Ǿ �ڵ����� �Ҹ���� ����
    //���� ���� �����Ǹ鼭 �����Ѵ�.
    int acount = 0;
    //���������� ����Ǿ���. �Լ��� ����Ǹ� �ڵ����� �Ҹ�ȴ�.
    // -> �׷� ��� �ʱ�ȭ ��..
    printf("scount = %d\t", scount);
    printf("acount = %d\n", acount);
    
    scount++;
    acount++;  
}

int main() {
    sub();
    sub();
    sub();
    return 0;
}