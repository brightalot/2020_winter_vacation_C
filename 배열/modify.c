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
배열 요소를 인수로 하여서 함수를 호출하면 복사본이 전달된다.
배열은 원본이 전달되지만 배열 요소는 복사본이 전달되므로 착각하면 안된다.

int main(void) 
{
    square_element(list[2]);
}

*******************list[2] -> int e 복사본 전달..*********************

void square_element(int e)
{
    e = e*e;
}
*/