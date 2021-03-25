#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

double div(int a, int b) {
	return (double)a / b;
}

int main()
{
	int funcNumber;
	int num1, num2;
	int (*fp[4])(int, int) = { add, sub, mul, div };
	printf("함수 번호와 계산할 값을 입력하세요 : ");
	scanf("%d %d %d", &funcNumber, &num1,
		&num2);
	printf("%d\n", fp[funcNumber](num1, num2));
	return 0;
}