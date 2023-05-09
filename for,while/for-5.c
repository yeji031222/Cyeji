#include <stdio.h>

int main()
{
    int j=0; // 초기값을 0으로 설정, 공백과 *을 출력하는데 사용됨

    for(int i=1; i<=5; i++)
    {
        for(j=1; j<=5-i; j++) // 1~5까지 1씩 증가
        {
            printf(" "); // 공백 출력
        }
        for(j=1; j<=i; j++) // 1~i 1씩 증가
        {
            printf("*"); // * 출력
        }
        printf("\n");
    }
    return 0;
}