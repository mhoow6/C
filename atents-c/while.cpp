#include <stdio.h>

int main() {

	float value = 3000.12f;

	while (value > 0) // 반복 횟수 모를때 사용
	{
		value -= 1.3f;
	}

	int a = 1000;

	// 조건을 따져서 한 번은 돌아감
	// 사용 빈도가 낮다
	do {

	} while (a > 1000);

	return 0;
}