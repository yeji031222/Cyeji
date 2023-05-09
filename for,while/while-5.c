#include <stdio.h> 

int main(void)
{
    int i, n, sum;
    i = 0;
    sum = 0; //변수 초기화

    while (i < 5) // i 값이 5 미만일 때까지 반복
    {
        printf("값을 입력하시오: "); // 값을 입력 받음
        scanf("%d", &n); // 입력 받은 값을 n에 저장

        sum = sum + n; // 이전의 합계 + 현재 입력 받은 값
        i++; // 1값 증가
    }
        printf("합계는 %d입니다.\n", sum); // 총 합계를 출력

    return 0;
}