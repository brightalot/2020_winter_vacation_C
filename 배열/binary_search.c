#include <stdio.h>
#define SIZE 16

int binary_search(int list[], int n, int key);

int main(void)
{
    int key;
    int grade[SIZE] = {2,3,1423,53,23,4,65,87,27,83,61,83,1234,34,54,64};

    printf("Å½»öÇÒ °ªÀº?\n");
    scanf("%d", &key);

    printf("Å½»ö °á°ú = %d\n", binary_search(grade, SIZE, key));

    return 0;
}

int binary_search(int list[], int n, int key) {
    int low, high, middle;

    low = 0;
    high = n - 1;

    while(low <= high) {
        printf("[%d, %d]\n", low, high);
        middle = (low + high)/2;
        if(key == list[middle])
            return middle;
        else if(key < list[middle])
            low = middle - 1;
        else
            low = middle + 1;
        
    }
    return -1;
}