#include <stdio.h>

int main() {
	// int *p = a;
	// ��: *(p + i) == p[i]
	// �ּ�: p + i == &p[i]

	int a = 10, b = 20, c = 30, d = 40, e = 50;
	int x[3] = { 1, 2, 3 };
	int y[3] = { 4, 5, 6 };
	int z[3] = { 7, 8, 9 };
	
	// �ּҸ� �����ϴ� �迭
	int* arr[5] = { &a, &b, &c, &d, &e };
	int* arr_[3] = { x, y, z };

	for (int i = 0; i < 5; i++)
		printf("%d ", *arr[i]); // ������ ����

	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%d ", arr_[i][j]); // *(arr[i]+j)
		printf("\n");
	}


}