#include <stdio.h>

int global = 20; // �ܺκ���, ��������

int* addScore(int num) {
	static int score = 0; // ��������, ���ú���
	score += num;
	return &score;
}

// �Ű������� �����Ͱ��� ����ϴ� ���?
// �Լ� �ܺ��� �ִ� ���� �����ϰڴٴ� ����
void swap(int* pa, int* pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void swap_temp(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 20; // �ڵ�����, ���ú���
	int b = 30;

	int* p = addScore(20); // score ���� 20

	*p = 400; // score �� 400���� ����

	for (int i = 0; i < 10; i++) {
		printf("score = %d\n", *addScore(i));
	}

	// call by address
	// �ּҸ� �����ߴٴ� �ǹ�
	swap(&a, &b);

	printf("a = %d\nb = %d", a, b);

	// call by value
	swap(&a, &b);

	printf("a = %d\nb = %d", a, b);

	return 0;
}