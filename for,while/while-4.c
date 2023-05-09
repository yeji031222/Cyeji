#include <stdio.h>

int main(void)
{
    int n;
    int i = 1;


    printf("출력하고 싶은 단: ");
    scanf("%d", &n); // 값을 입력 받아 n에 저장

    while (i <= 9) // i가 9일 때까지 반복
    {
        printf(" %d * %d = %d \n", n, i, n*i); // n과 i를 곱한 값을 출력한다
        i++; // i를 1 증가
    }
    return 0;
}