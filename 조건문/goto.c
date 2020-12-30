//구구단 출력 프로그램
#include <stdio.h>

int main(void) {
    int i = 1;

loop: 
// loop라는 이름의 레이블을 현 위치에 정의한다.
    printf("%d * %d = %d \n", 3, i, 3 * i);
    i++;
    if (i == 10) goto end; // i가 10이되면 레이블 end로 점프한다.
    goto loop;
end:
    return 0;
}

//오류 발생시 외부로 빠져 나가려고 
//할 때 말고는 while이나 for를 사용하는 편이 효율적임