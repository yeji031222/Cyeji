//sin(), cos() 함수
#include <stdio.h>
#include <math.h> // 수학 함수들을 포함하는 표준 라이브러리

int main( void )
{
    double pi = 3.1415926535;
    double x, y;

    x = pi / 2; // x에 pi의 절반 값을 저장
    y = sin( x ); // sin으로 x의 사인 값을 계산 후, y에 저장
    printf( "sin( %f ) = %f\n", x, y ); // 계산한 결과를 출력

    y = cos( x ); // cos 함수를 사용하여 x의 코사인 값을 계산하여, y에 저장
    printf( "cos( %f ) = %f\n", x, y ); // 계산한 결과를 출력
} 