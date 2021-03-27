#include <stdio.h>

void DrawEmptyRectangle() {
	// 속 빈 사각형
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i >= 1 && i < 9) {
				if (j == 0 || j == 9) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			else {
				printf("*");
			}

		}
		printf("\n");
	}
}

// 함수도 메모리에서 만들어짐
// 매개변수 또한 메모리에서 만들어짐
int add(int a, int b) {
	return a + b; // 리턴값 또한 메모리에서 만들어짐
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

float div(int a, int b) {
	return (float) a / b;
}

int main() {

	//DrawEmptyRectangle();

	// 인자로 20과 40이 넘어감 (argument)
	// main() 수행 중, add() 함수를 만나면 add() 함수 수행
	printf("%d\n", add(20, 40));
	printf("%d\n", sub(20, 40));
	printf("%d\n", mul(20, 40));
	printf("%f\n", div(20, 40));

	return 0;
}