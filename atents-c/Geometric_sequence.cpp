#include <stdio.h>

int main() {
	int R = 3; // ���� 3
	unsigned long long A = 2; // ���� 2
	unsigned long long S = 0; // ���� ��
	int N = 2;

	S = A;

	do
	{
		A = A * R;
		printf("A = %llu\n", A);
		S = S + A;
		printf("S = %llu\n", S);
		N = N + 1;
		printf("N = %d\n", N);
		printf("----------------------------------------\n");
	} while (N <= 100);

	printf("sum of sequence = %llu\n", S);

	return 0;
}