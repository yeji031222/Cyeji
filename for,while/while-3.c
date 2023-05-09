#include <stdio.h>

int main(void)
{
    int i=1; // i를 1로 초기화

    while (i<=9) // i를 9이하일 때까지 반복
    {
        printf("2 * %d = %d \n", i, 2*i);// d 에 i가 대입되면서 2*9까지 출력
        i++; // i 1씩 증가
    }
    return 0;
}