// 나무 높이 측정, 각도기ㅏ와 삼각 함수를 이용하면 나무의 높이를 측정할 수 있다.
#define _CRT_SECURE_NO_WARNINGS // 전처리기 지시문 (경고를 무시하는 의미)
#include <math.h> // 수학 함수들을 포함하는 표준 라이브러리 
#include <stdio.h>

int main(void)
{
    double height, distance, tree_height, degrees, radians; // 변수 선언

    printf("나무와의 길이(단위는 미터): ");
    scanf("%lf", &distance);

    printf("측정자의 키(단위는 미터): ");
    scanf("%lf", &height);

    printf("각도(단위는 도): ");
    scanf("%lf", &degrees);

    radians = degrees * (3.141592 / 180.0); // 입력받은 각도를 라디안으로 변환한다.

    tree_height = tan(radians) * distance + height; // 높이 계산
    printf("나무의 높이(단위는 미터): %lf \n", tree_height); 

    return 0;
}