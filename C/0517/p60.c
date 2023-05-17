// 동전 던지기 게임 (동전을 100번 던져서 앞면이 나오는 횟수와 뒷면이 나오는 횟수를 출력한다.)
#include <stdlib.h> //랜덤 숫자 생성 헤더파일
#include <stdio.h> // 입출력 헤더파일
#include <time.h> // 시간 함수 헤더파일 

int coin_toss (void); // 동전 던지기에 대한 함수 선언

int main(void)
{
    int toss; // 정수형 변수 선언
    int heads = 0; // 0으로 초기화, 앞면이 나온 횟수 저장
    int tails = 0; // 0으로 초기화, 뒷면이 나온 횟수 저장
    srand((unsigned)time(NULL)); // 난수생성

    for (toss = 0; toss < 100; toss++) // 100번 반복
    {
        if(coin_toss() == 1) // 동전의 앞면이 나온다면
            heads++;
        else // 뒷면이 나온 경우
            tails++;
}
    printf("동전의 앞면: %d \n", heads);
    printf("동전의 뒷면: %d \n", tails);
    
    return 0;
}
    int coin_toss( void ) // 동전 던지기에 대한 함수 정의
{
    int head = rand() % 2; // 0이나 1을 랜덤으로 정하여 앞,뒤를 결정

    return head;
}