#include <windows.h>
#include <stdio.h>

int main() {
    HDC hdc = GetWindowDC(GetForegroundWindow()); //그리기 속성

    //여기에 그림을 그리는 반복문을 추가한다.
    for (int i = 0; i<100; i++) {
        int x = rand() % 500;
        int y = rand() % 400;
        int w = rand() % 300;
        int h = rand() % 100;
        Rectangle(hdc, x, y, x + w, y + h); //화면에 사각형을 그린다.
        Sleep(100);
    } 
    return 0;
    
}