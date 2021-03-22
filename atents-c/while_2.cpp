#include <stdio.h>

int main() {

	int value = 0;

	//while (1) { // 무한루프
	//	printf("값을 입력하세요: (Exit: -1) ");
	//	scanf_s("%d", &value);

	//	if (value == -1) {
	//		break; // 반복문 탈출할 때 사용
	//	}

	//	printf("입력된값은: %d\n", value);
	//}

	//for (int i = 0; i < 100; i++) {
	//	if (i % 4 != 0) {
	//		continue; // 다음 반복(i -> i++)으로 넘어간다.
	//	}

	//	printf("%d\n", i);
	//}

	float value = 1000.904f;
	while (1) {
		while (value > 0) {
			value -= 3.4f;
			printf("value: %lf\n", value);
			if (value < 10) {
				goto Exit;
			}
		}
	}

Exit:
	return 0;
}