#include <stdio.h>

int main() {
	
	// 단일 for 문 - 1차원적인 데이터를 다룰 때 사용
	/*for (int i = 0; i < 10; i++)
	{
		printf("*");
	}*/

	// 중첩 for 문 - 2차원적인 데이터를 다룰 때 사용
	/*for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	// 3중첩 for 문 - 3차원적인 데이터를 다룰 때 사용
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

	// 테두리만 냅둔 속 빈 사각형 만들기
	// i = 1 부터 j = 1 ~ 8만, i = 8까지
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

	// 직삼각형을 그려보기
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

	// 역직삼각형을 그려보기
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

	// 정삼각형을 그려보기
	//  000*			-> 공백 2개
	//  00***			-> 공백 1개
	//  0*****
	for (int i = 0; i < 5; i += 2) {

		// 공백
		for (int j = 5; j >= i; j -= 2) {
			printf("O");
		}

		// 삼각형
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("----------------------------\n");

	// 정삼각형 4방향 (숙제)
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
			// 공백
			for (int j = 1; j < i; j++) {
				printf("O");
			}

			for (int j = i; j <= 5; j++) {
				printf("*");
			}
		}
		else {
			// 공백
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
	//  0***			-> 공백 1개
	//  00*				-> 공백 2개

	for (int i = 0; i < 5; i += 2) {
		// 공백
		for (int j = 0; j < i; j += 2) {
			printf("0");
		}

		// 삼각형
		for (int j = 5; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}