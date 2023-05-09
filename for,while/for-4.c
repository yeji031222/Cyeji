#include <stdio.h>

int main()
{
    for(int i=5; i>=1; i--) // 5~1 감소식
    {
        for(int j=1; j<=i; j++) //  1~i 1씩 증가
    {
        printf("*"); // * 출력
    }
    printf("\n");
    }
    return 0;
}
