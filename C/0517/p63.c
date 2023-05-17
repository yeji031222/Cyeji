// 자동차 게임(난수를 이용하여 자동차 게임을 작성)
#include <stdlib.h>
#include <stdio.h>
#include <conio.h> // 키보드 입력을 처리 해 주는..??
#include <time.h>

// 자동차를 출력해 주는 함수
void disp_car(int car_number, int distance) // 차 번호, 차의 이동 거리를 나타냄
{
    int i;

    printf("CAR #%d:", car_number);
    for( i = 0; i < distance/10; i++ ) // 'distance'를 10으로 나눈만큼 반복
    {
        printf("*");
    }
        printf("\n");
}

int main(void)
{ 
    int i;
    int car1_dist=0, car2_dist=0; // 변수 선언, 초기값 0 설정

    srand( (unsigned)time( NULL ) ); // 난수 생성 

    for( i = 0; i < 6; i++ ) // 6번 반복
    {
        car1_dist += rand() % 100; //차의 거리에 난수를 더하여 증가 (0~99로 제한)
        car2_dist += rand() % 100;
        disp_car(1, car1_dist); // 1번 차를 출력, 'car_dist'는 현재 거리를 나타낸다
        disp_car(2, car2_dist);
        printf("---------------------\n");
        _getch(); //문자 입력을 받는 ..
    }
    return 0;
}