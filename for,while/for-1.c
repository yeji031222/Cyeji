#include <stdio.h>

int main()
{
{
    for(int i=1; i<=5; i++) // 1부터 5까지 1씩 증가 반복
    {
        for(int j=1; j<=i; j++) // j에 1~i 1씩 증가
    {
        printf("*"); // 별 출력
    }
    printf("\n");
    }
    return 0;
}
}