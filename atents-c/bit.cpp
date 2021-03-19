#include <stdio.h>

int main() {

	int a = 2; // 0000 0010
	int b = 3; // 0000 0011


	// XOR�� �̿��ؼ� a�� b�� ���� �ٲ㺸����.

	// 0000 0010 == a
	// 0000 0001 == a ^ b
	// 0000 0011 == b
	a = a ^ a ^ b;
	printf("a: %d\n", a);

	a = 2;
	b = 3;

	// 0000 0011 == b
	// 0000 0001 == a ^ b
	// 0000 0010 == a
	b = b ^ a ^ b;

	printf("b: %d", b);

	return 0;
}