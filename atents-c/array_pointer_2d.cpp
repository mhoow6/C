#include <stdio.h>

int main(void) {
	// �������� (*�����͸�)[�迭ũ��];

	int arr[3][5] = {
		{ 1, 2, 3, 4, 5 },
		{ 6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};

	// int Ÿ���� �ε����� 5�� ������ �ִ� �迭�� ����Ű�� ������
	int (*p)[5] = &arr[0]; // int (*p) [5] = arr;

	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
			// p[i][j] = *( *(p + i) + j) 
			printf("%d", p[i][j]); // p[i][j]�� ������ �迭�� ���� arr[i][j]�� �ǹ���
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%p", p + i + j);
		printf("\n");
	}
}