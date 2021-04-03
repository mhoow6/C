#include <stdio.h>

int main() {
	int N = 1; // 자연수
	int F = 1; // 계승(팩토리얼값)을 보관하는 변수
	unsigned long long S = 1; // 팩토리얼의 값 보관

	do {
		N = N + 1;
		F = F * N;
		S = S + F;
	} while (N < 100);

	printf("100 factorial = %llu\n", S);

	return 0;
}