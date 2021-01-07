#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, answer, i;

    srand(time(NULL)); //난수발생기를 초기화한다.

    for(i = 0; i < 10; i++) {
        x = rand() % 10; //난수를 0에서 9사이로 만든다.
        y = rand() % 10;
        printf("%d + %d = ", x, y);
        scanf("%d", answer);
        if (x + y == answer)
            printf("맞았습니다.\n");
        else
        {
            printf("틀렸습니다.\n");
        }
        return 0;
        
    }
}