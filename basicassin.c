/*
제목 : 과제 실험 문제2
기능 : 체적계산 프로그램 출력
파일명 : 문제2.c
수정날짜 : 2021.10.11
작성자 : 윤현수
*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
int main(void)
{
	int 진수_10;

	printf("10진수변환기\n");
	scanf("%u", &진수_10);
	printf("10진수->8진수:%o\n",진수_10);
	printf("10진수->10진수:%u\n", 진수_10);
	printf("10진수->16진수:%x\n", 진수_10);
	return 0;
}