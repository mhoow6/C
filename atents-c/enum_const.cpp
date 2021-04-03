enum {
	MAX = 100,
	MIN = 200
};

// 포인터를 내부에서 변경시키지 못하게 안정성 부여
void print(const int* pa) {
	// *pa = 100;
	printf("%d", *pa);
}

#include <stdio.h>
int main() {
	int a = 20;
	int b = 20;

	// const 변수는 상수성을 띄게 되어 값 자체가 되어버린다
	// 생성과 동시에 초기화해야된다.
	const int NUM = 300;
	// NUM = 200;

	printf("%d", MAX);
	printf("%d", MIN);
	printf("%d", NUM);

	// a의 값을 보호해주는 역할
	// 포인터에 들어있는 값은 변경 가능
	const int* pa = &a;
	// *pa = 100;
	pa = &b;

	// 포인터 자체를 보호해주는 역할
	// a의 값은 변경 가능
	int* const pb = &b;
	*pb = 100;
	// pb = &a;


	// 둘 다 보호하고 싶을 경우
	const int* const pc = &a;
	// pc = &b;
	// *pc = 100;

	return 0;
}