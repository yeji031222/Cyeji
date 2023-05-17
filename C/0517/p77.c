// 시간 맞추기 게임, 10초가 지나면 엔터키를 눌러 정확한 시간과 얼마나 차이가 나는지를 출력한다.
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t start, end; // 시작시간과 종료시간을 저장 (time_t는 unsigned long과 동일하다)
    start = time(NULL); // 시작 시간을 초로 (time()은 1970년 1월 1일 이후의 시간을 초 단위로 반환한다.)
    printf("10초가 되면 아무 키나 누르세요\n");
    while (1)
    {
    if (getchar())
    break; // 문자 입력을 기다리다가 입력을 받으면 반복문이 멈춘다.
    }
    printf("종료되었습니다.\n");
    end = time(NULL); // 종료 시간을 초로 가져온다
    printf("경과된 시간은 %ld 초입니다. \n", end - start);
    return 0;
}