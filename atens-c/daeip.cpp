#include <stdio.h>

int main() {
	int a = 20;
	int b = 30;

	/* a>b에서 참이면 a, 거짓이면 b*/
	int result = a > b ? printf("a가 큽니다") : printf("b가 큽니다");

	return 0;
}