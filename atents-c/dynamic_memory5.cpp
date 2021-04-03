#include <stdio.h>
#include <stdlib.h>

/******************************
 * 동적 2차원 배열 
 ******************************/

int main() {
	int col = 0;
	int row = 0;

	printf("배열의 행 사이즈를 입력하세요. :");
	scanf_s("%d", &row);

	printf("배열의 열 사이즈를 입력하세요. :");
	scanf_s("%d", &col);

	// int*형 주소를 저장하는 포인터
	int** parray = (int**)malloc(sizeof(int*) * col);

	// ps. 2차원 배열
	// array의 데이터형은 int(*)[10]
	int array[10][10];


	for (int i = 0; i < col; i++)
	{
		parray[i] = (int*)malloc(sizeof(int) * row);
		// *(parray+i) = (int*)malloc(sizeof(int) * row);
	}

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++) 
		{
			parray[i][j] = i * row + j;
			// *(*(parray + i) + j) = i * row + j;
		}
	}

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("parray[%d][%d] = %d\n", i, j, parray[i][j]);
		}
	}

	// 배열안에 있는 (int*)형 메모리 해제
	for (int i = 0; i < col; i++) {
		free(parray[i]);
	}

	// (int*)형의 포인터 메모리 해제
	free(parray);

	return 0;
}