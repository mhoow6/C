#include <stdio.h>

int main() {
	/*int array[100];
	* 
	* int* parray = array; // int�� ������ ��� �ִ� �ּҰ� ����ִ� �� (������)

	for (int i = 0; i < 100; i++)
	{
		array[i] = i;
	}*/

	/*for (int i = 0; i < 100; i++)
	{
		printf("array[%d] = %d\n", i, array[i]);
	}*/

	printf("----------------------------------\n");

	// �迭�� ����� �� �߿� ¦���� ����غ�����.
	/*for (int i = 0; i < 100; i++)
	{
		if (array[i] % 2 == 0) {
			printf("array[%d] = %d\n", i, array[i]);
		}
	}*/

	printf("----------------------------------\n");

	int array2[10][10]; // �������迭

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			array2[i][j] = i * 10 + j;
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("array[%d][%d] = %d\n", i, j, array2[i][j]);
		}
	}
}