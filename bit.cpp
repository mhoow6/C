#include <stdio.h>

int main() {

	int a = 2;
	int b = 3;


	// XOR�� �̿��ؼ� a�� b�� ���� �ٲ㺸����.
	a = a ^ b ^ a;
	b = b ^ a ^ a; // ����

	printf("a: %d\n", a);
	printf("b: %d", b); // ����


	return 0;
}