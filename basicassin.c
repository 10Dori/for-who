/*
���� : ���� ���� ����2
��� : ü����� ���α׷� ���
���ϸ� : ����2.c
������¥ : 2021.10.11
�ۼ��� : ������
*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
int main(void)
{
	int ����_10;

	printf("10������ȯ��\n");
	scanf("%u", &����_10);
	printf("10����->8����:%o\n",����_10);
	printf("10����->10����:%u\n", ����_10);
	printf("10����->16����:%x\n", ����_10);
	return 0;
}