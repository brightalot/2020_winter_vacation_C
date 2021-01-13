#include <stdio.h>
#define SIZE 7

void modify_array(int a[], int size);
void print_array(int a[], int size);

int main(void) {
    int list[SIZE] = {1,2,3,4,5,6,7};
    print_array(list, SIZE);
    modify_array(list, SIZE);
    print_array(list, SIZE);

    return 0;
}

void modify_array(int a[], int size)
{
    int i;
    for(i=0;i<size;i++) 
        a[i] += 1;

}

void print_array(int a[], int size)
{
    int i;
    for(i=0;i<SIZE;i++) {
        printf("%3d", a[i]);
    }
    printf("\n");

}

/* 
�迭 ��Ҹ� �μ��� �Ͽ��� �Լ��� ȣ���ϸ� ���纻�� ���޵ȴ�.
�迭�� ������ ���޵����� �迭 ��Ҵ� ���纻�� ���޵ǹǷ� �����ϸ� �ȵȴ�.

int main(void) 
{
    square_element(list[2]);
}

*******************list[2] -> int e ���纻 ����..*********************

void square_element(int e)
{
    e = e*e;
}
*/