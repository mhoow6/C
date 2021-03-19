#include <stdio.h>

int main(void) {
	// 데이터형 (*포인터명)[배열크기];

	int arr[3][5] = {
		{ 1, 2, 3, 4, 5 },
		{ 6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};

	// int 타입의 인덱스를 5개 가지고 있는 배열을 가리키는 포인터
	int (*p)[5] = &arr[0]; // int (*p) [5] = arr;

	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
			// p[i][j] = *( *(p + i) + j) 
			printf("%d", p[i][j]); // p[i][j]는 이차원 배열의 원소 arr[i][j]를 의미함
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%p", p + i + j);
		printf("\n");
	}
}