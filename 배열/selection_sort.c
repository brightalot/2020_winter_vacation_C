#include <stdio.h>
#define SIZE 10

int main(void) {
    int list[SIZE] = { 8, 3, 9, 2, 4, 5, 6, 7, 0, 1};

    int temp, least;

    for(int i = 0; i<SIZE-1; i++) 
    {
        least = i;
        for(int j = i + 1;j <SIZE; j++) 
            if(list[j] < list[least])
                least = j;
        temp = list[i];
        list[i] = list[least];
        list[least] = temp;
    }

    for (int i = 0; i < SIZE; i++) 
        printf("%d " , list[i]);
    printf("\n");
    return 0;
}