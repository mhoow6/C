#include <stdio.h>

int global = 20; // 외부변수, 전역변수

int* addScore(int num) {
	static int score = 0; // 정적변수, 로컬변수
	score += num;
	return &score;
}

// 매개변수로 포인터값을 사용하는 경우?
// 함수 외부의 있는 값을 변경하겠다는 목적
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
	int a = 20; // 자동변수, 로컬변수
	int b = 30;

	int* p = addScore(20); // score 값이 20

	*p = 400; // score 값 400으로 변경

	for (int i = 0; i < 10; i++) {
		printf("score = %d\n", *addScore(i));
	}

	// call by address
	// 주소를 전달했다는 의미
	swap(&a, &b);

	printf("a = %d\nb = %d", a, b);

	// call by value
	swap(&a, &b);

	printf("a = %d\nb = %d", a, b);

	return 0;
}