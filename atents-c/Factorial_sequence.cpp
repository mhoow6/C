#include <stdio.h>

int main() {
	int N = 1; // �ڿ���
	int F = 1; // ���(���丮��)�� �����ϴ� ����
	unsigned long long S = 1; // ���丮���� �� ����

	do {
		N = N + 1;
		F = F * N;
		S = S + F;
	} while (N < 100);

	printf("100 factorial = %llu\n", S);

	return 0;
}