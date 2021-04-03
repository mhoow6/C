#include <stdio.h>
#include <stdlib.h>

/******************************
 * ���� 2���� �迭 
 ******************************/

int main() {
	int col = 0;
	int row = 0;

	printf("�迭�� �� ����� �Է��ϼ���. :");
	scanf_s("%d", &row);

	printf("�迭�� �� ����� �Է��ϼ���. :");
	scanf_s("%d", &col);

	// int*�� �ּҸ� �����ϴ� ������
	int** parray = (int**)malloc(sizeof(int*) * col);

	// ps. 2���� �迭
	// array�� ���������� int(*)[10]
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

	// �迭�ȿ� �ִ� (int*)�� �޸� ����
	for (int i = 0; i < col; i++) {
		free(parray[i]);
	}

	// (int*)���� ������ �޸� ����
	free(parray);

	return 0;
}