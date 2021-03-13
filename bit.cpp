#include <stdio.h>

int main() {

	int a = 2;
	int b = 3;


	// XOR룰 이용해서 a와 b의 값을 바꿔보세요.
	a = a ^ b ^ a;
	b = b ^ a ^ a; // 숙제

	printf("a: %d\n", a);
	printf("b: %d", b); // 숙제


	return 0;
}