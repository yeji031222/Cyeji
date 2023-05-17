// 도전문제, 자동차를 3개로 늘리기
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

#define NUM_CARS 3 // 상수로 정의한 자동차의 수

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
    int car_dist[NUM_CARS] = {0}; // 차의 이동 거리를 저장해 주는 배열

    srand( (unsigned)time( NULL ) ); // 난수 생성

    for( i = 0; i < 6; i++ ) // 변수 초기값 0, 6번 반복
    {
        for (int j = 0; j < NUM_CARS; j++)  // j가 NUM_CARS보다 작을 때까지 반복하면서 1씩 증가
        {
            car_dist[j] += rand() % 100; //차의 거리에 난수를 더하여 증가 (0~99로 제한)
            disp_car(j+1, car_dist[j]); // 자동차 출력
        }
        printf("---------------------\n");
        _getch(); 
    }
    return 0;
}