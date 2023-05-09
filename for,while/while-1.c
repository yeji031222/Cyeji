#include <stdio.h>

int main(void){
    int sum=0, count=1; // SUM은 0값으로 초기화, COUNT는 1로 초기화

    while (count<=100) // COUNT를 100이 될 때까지 반복
    {
        sum=sum+count;
        count=count+1; // COUNT 를 1 증가
    }
    printf("%d", sum); // SUM을 출력

    return 0;
}