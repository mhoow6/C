#include <stdio.h>

void DrawEmptyRectangle() {
	// �� �� �簢��
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

// �Լ��� �޸𸮿��� �������
// �Ű����� ���� �޸𸮿��� �������
int add(int a, int b) {
	return a + b; // ���ϰ� ���� �޸𸮿��� �������
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

	// ���ڷ� 20�� 40�� �Ѿ (argument)
	// main() ���� ��, add() �Լ��� ������ add() �Լ� ����
	printf("%d\n", add(20, 40));
	printf("%d\n", sub(20, 40));
	printf("%d\n", mul(20, 40));
	printf("%f\n", div(20, 40));

	return 0;
}