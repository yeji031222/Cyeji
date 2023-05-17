#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
    system("dir"); // 명령어를 실행해서 현재 컴퓨터의 파일 및 폴더 목록을 출력한다.
    printf("아무 키나 치세요\n");

    _getch(); // 문자 입력 받기
    system("cls"); // 화면을 지우고 콘솔을 초기화

    return 0;
}