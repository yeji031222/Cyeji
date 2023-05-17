// floor와 ceil 함수
#include <stdio.h>

int main()
{
double result, value = 1.6;

result = floor(value); // value와 가장 가까운 작은 정수, result에 저장하여 출력
printf("%lf ", result);

result = ceil(value); // value와 가장 가까운 큰 정수
printf("%lf ", result);
}