//������ ��� ���α׷�
#include <stdio.h>

int main(void) {
    int i = 1;

loop: 
// loop��� �̸��� ���̺��� �� ��ġ�� �����Ѵ�.
    printf("%d * %d = %d \n", 3, i, 3 * i);
    i++;
    if (i == 10) goto end; // i�� 10�̵Ǹ� ���̺� end�� �����Ѵ�.
    goto loop;
end:
    return 0;
}

//���� �߻��� �ܺη� ���� �������� 
//�� �� ����� while�̳� for�� ����ϴ� ���� ȿ������