#include <windows.h>
#include <stdio.h>

int main() {
    HDC hdc = GetWindowDC(GetForegroundWindow()); //�׸��� �Ӽ�

    //���⿡ �׸��� �׸��� �ݺ����� �߰��Ѵ�.
    for (int i = 0; i<100; i++) {
        int x = rand() % 500;
        int y = rand() % 400;
        int w = rand() % 300;
        int h = rand() % 100;
        Rectangle(hdc, x, y, x + w, y + h); //ȭ�鿡 �簢���� �׸���.
        Sleep(100);
    } 
    return 0;
    
}