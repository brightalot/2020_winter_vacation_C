//�ҹ��ڸ� �빮�ڷ� �����ϱ�
#include <stdio.h>

int main() {
    char letter;

    while(1) {
        printf("�ҹ��ڸ� �Է��Ͻÿ� : ");
        scanf(" %c", &letter); //���鹮�� ����

        if(letter == 'Q')
            break;
        if(letter < 'a' || letter > 'z')
            continue;
            letter -= 32; // �ҹ��� -> �빮��
            printf("��ȯ�� �빮�ڴ� %c�Դϴ�.\n", letter);

    }
    return 0;
}