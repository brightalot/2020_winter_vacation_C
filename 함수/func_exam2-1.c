#include <stdio.h>

void happyBirthday(int j) {
    for (int i = 0; i < j; i++) {
        printf("���� �����մϴ�. \n");
        printf("���� �����մϴ�. \n");
        printf("����ϴ� ģ���� ");
        printf("���� �����մϴ�. \n");
    }
}

int main() {
    int times;
    printf("�� �� �ݺ� �ұ��? :");
    scanf("%d", &times);
    happyBirthday(times);
    return 0;
}