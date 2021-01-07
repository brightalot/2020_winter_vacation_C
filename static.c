#include <stdio.h>

void sub() {
    static int scount = 0; 
    //정적 변수로 선언되었다. 함수가 종료되어도 자동으로 소멸되지 않음
    //이전 값이 유지되면서 증가한다.
    int acount = 0;
    //지역변수로 선언되었다. 함수가 종료되면 자동으로 소멸된다.
    // -> 그럼 계속 초기화 됨..
    printf("scount = %d\t", scount);
    printf("acount = %d\n", acount);
    
    scount++;
    acount++;  
}

int main() {
    sub();
    sub();
    sub();
    return 0;
}