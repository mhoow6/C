#include <stdio.h>

int main() {

	/*초기식: 조건식: 증감식*/
	for (int i = 0, j = 0; i < 10 && j < 10; i++, j++) // 단일 for 문
	{
		printf("%d\n", i);
	}

	printf("--------------------\n");

	// 0 ~ 100까지 반복하고 짝수만 출력하세요.
	for (int i = 0; i < 101; i++)
	{
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
	}

	for (int i = 0; i < 101; i += 2)
	{
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
	}

	printf("--------------------\n");

	int result = 0;

	// 3의 배수 이면서 4의 배수인 값만 합산
	for (int i = 0; i < 101; i++)
	{
		if (i % 3 == 0 && i % 4 == 0) {
			result += i;
		}
	}

	printf("%d\n", result);

	return 0;
}