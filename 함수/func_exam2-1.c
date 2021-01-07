#include <stdio.h>

void happyBirthday(int j) {
    for (int i = 0; i < j; i++) {
        printf("생일 축하합니다. \n");
        printf("생일 축하합니다. \n");
        printf("사랑하는 친구의 ");
        printf("생일 축하합니다. \n");
    }
}

int main() {
    int times;
    printf("몇 번 반복 할까요? :");
    scanf("%d", &times);
    happyBirthday(times);
    return 0;
}