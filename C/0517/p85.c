// 공학용 계산기 프로그램 작성, 학습한 함수들을 이용하여 사인값이나 코사인값을 계산하는 계산기를 만든다.
#include <stdio.h>
#include <math.h>

// 사용자에게 선택 받는 함수
int menu(void)
{
    int n;

    printf("1.팩토리얼\n");
    printf("2.싸인\n");
    printf("3.로그(base 10)\n");
    printf("4.제곱근\n");
    printf("5.순열(nPr)\n");
    printf("6.조합(nCr)\n");
    printf("7.종료\n");
    printf("선택해주세요: ");
    scanf("%d", &n);

    return n;
}

// 팩토리얼 계산
void factorial()
{
    long long n, result=1, i; // 입력 받을 정수, 팩토리얼 값을 저장하는 변수

    printf("정수를 입력하시오:");
    scanf("%lld", &n);

    for (i = 1; i <= n; i++) // i를 1부터 n까지 증가하며 반복
        result =result * i; // 팩토리얼 계산하여 result에 저장

    printf("결과 = %lld\n\n", result); // 팩토리얼 결과 출력
}

// 사인값 계산
void sine()
{
    double a, result;  // 입력 받을 정수, 사인 값을 저장하는 변수

    printf("각도를 입력하시오:");
    scanf("%lf", &a);

    result = sin(a); // 사인 값을 계산하여 result에 저장

    printf("결과 = &lf\n\n", result); // 사인 결과 출력
}

//로그(base 10) 계산
void logBase10()
{
    double a, result; // 입력 받을 정수, 로그 값을 저장하는 변수

    printf("실수값을 입력하시오:");
    scanf("%lf", &a);

    if (a<=0.0) // 입력된 값이 a가 0이하인 경우
        printf("오류\n");
    else // a 값이 0 초과인 경우
    {
        result=log10(a); // 로그 값을 계산하여 result에 저장
        printf("결과=%lf\n\n", result); // 로그 결과 출력
    }
}

int main(void)
{
    while (1) // 무한
    { switch (menu())
    { // 계산 함수 호출
    case 1:
        factorial();
        break;
    case 2:
        sine();
        break;
    case 3:
        logBase10();
        break;
    case 7:
        printf("종료합니다.\n");
        return 0;

    default:
        printf("잘못된 선택입니다.\n");
        break;
        }
    }
}