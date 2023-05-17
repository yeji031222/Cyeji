// 삼각함수 그리기, 삼각함수를 계산하는 라이브러리 함수를 학습하였다. 
// 이것을 이용하여서 싸인함수 그래프를 90도 회전하여서 그려보기
#include <stdio.h>
#include <math.h>
#define PI 3.141592 // 파이값을 상수로 정의 (pi를 사용할 때, 값 입력 없이 사용할 수 있음)

double rad(double degree) // degree 값을 radian으로 변환하는 함수
{
    return PI * degree / 180.0; // PI와 degree를 곱한 후 180으로 나눈다.
}

void drawbar(int height) 
{
    for (int i = 0; i < height; i++) // 0으로 초기화, height보다 작을 때까지 반복, 1씩 증가
        printf("*");
    printf("\n");
}

int main(void)
{
    int degree, x, y; //변수 선언
    for (degree = 0; degree <= 90; degree += 10) //0부터 90까지 10씩 증가
    {
        y = (int)(60 * sin(rad((double)degree)) + 0.5); //사인 값은 -1.0에서 1.0이므로 정수를 반올림해서 증폭
        drawbar(y); // 높이 값 y에 따라 그래프를 출력한다
    }
    return 0;
}