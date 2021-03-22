#include <stdio.h>

int main() {
	
	// ���� for �� - 1�������� �����͸� �ٷ� �� ���
	/*for (int i = 0; i < 10; i++)
	{
		printf("*");
	}*/

	// ��ø for �� - 2�������� �����͸� �ٷ� �� ���
	/*for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	// 3��ø for �� - 3�������� �����͸� �ٷ� �� ���
	/*for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				printf("*");
			}
		}
		printf("\n");
	}*/

	printf("----------------------------\n");

	// �׵θ��� ���� �� �� �簢�� �����
	// i = 1 ���� j = 1 ~ 8��, i = 8����
	/*for (int i = 0; i < 10; i++)
	{
		if (i == 0 || i == 9) {
			printf("*********\n");
		}
		else {
			printf("*       *\n");
		}
	}*/

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i >= 1 && i < 9) {
				if (j == 0 || j == 9) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			else {
				printf("*");
			}
			
		}
		printf("\n");
	}

	printf("----------------------------\n");

	// ���ﰢ���� �׷�����
	// *
	// **
	// ***
	// ****
	// *****
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("----------------------------\n");

	// �����ﰢ���� �׷�����
	// ****
	// ***
	// **
	// *
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("----------------------------\n");

	// ���ﰢ���� �׷�����
	//  000*			-> ���� 2��
	//  00***			-> ���� 1��
	//  0*****
	for (int i = 0; i < 5; i += 2) {

		// ����
		for (int j = 5; j >= i; j -= 2) {
			printf("O");
		}

		// �ﰢ��
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("----------------------------\n");

	// ���ﰢ�� 4���� (����)
	// *0000
	// **000
	// ***00
	// **000
	// *0000

	for (int i = 1; i <= 5; i++) {
		if (i > 3) {
			for (int j = i; j <= 5; j++) {
				printf("*");
			}
		}
		else {
			for (int j = 0; j < (i % 4); j++) {
				printf("*");
			}
		}
		printf("\n");
	}
	
	printf("----------------------------\n");

	// 0000*
	// 000**
	// 00***
	// 000**
	// 0000*

	for (int i = 1; i <= 5; i++) {
		if (i > 3) {
			// ����
			for (int j = 1; j < i; j++) {
				printf("O");
			}

			for (int j = i; j <= 5; j++) {
				printf("*");
			}
		}
		else {
			// ����
			for (int j = 5; j > i; j--) {
				printf("O");
			}

			for (int j = 0; j < (i % 4); j++) {
				printf("*");
			}
		}
		printf("\n");
	}

	printf("----------------------------\n");

	//  *****			
	//  0***			-> ���� 1��
	//  00*				-> ���� 2��

	for (int i = 0; i < 5; i += 2) {
		// ����
		for (int j = 0; j < i; j += 2) {
			printf("0");
		}

		// �ﰢ��
		for (int j = 5; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}