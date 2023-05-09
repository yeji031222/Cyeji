#include <stdio.h>

int main(void)
{
    int i = 1; // i를 1로 초기화
    while (i <= 5) // i가 5 이하일 때까지 반복
    {
        int j = 1; //j를 1로 초기화
        while (j <= i) // j가 i 이하일 때까지 반복
        {
            printf("*");
            j++; // j를 1 증가
        }
        printf("\n");
        i++; // i를 1 증가
    }
    return 0;
}