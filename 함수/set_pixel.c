#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, x, y, red, green, blue;

    HDC hdc;
    hdc = GetWindowDC(GetForegroundWindow());

    srand((unsigned)time(NULL));
    for(i=0; i < 10000; i++) {
        x = rand()%300;
        y = rand()%300;

        red = rand() % 256;
        green = rand() % 256;
        blue = rand() % 256;

        //(x,y)��ġ�� ���� RGB�������� ���� �׸���.
        Setpixel(hdc, x, y, RGB(red, green, blue));
    }
    // _getch();
    //����ڰ� �Է��ϴ� ���ڸ� ����..
    return 0;

}