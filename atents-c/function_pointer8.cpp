#include <stdio.h>
float add(int a, int b) {
	return (float)a + b;
}

float sub(int a, int b) {
	return (float)a - b;
}

float mul(int a, int b) {
	return (float)a * b;
}

float div(int a, int b) {
	return (float)a / b;
}

float calculate(float(*pfunc)(int, int), int a, int b) {
	return pfunc(a, b);
}


int main() {
	int a = 10;
	int b = 20;
	int oper = 0;

	float(*pfuncArray[4])(int, int); // 함수 포인터 배열
	pfuncArray[0] = add;
	pfuncArray[1] = sub;
	pfuncArray[2] = mul;
	pfuncArray[3] = div;


	printf("연산방법을 입력하세요: ");
	scanf_s("%d", &oper);

	float c = pfuncArray[oper](a, b);
	printf("%d O %d = %f\n", a, b, c);


	/*switch (oper) {
	case 0:
		printf("%d + %d = %f\n", a, b, calculate(add, a, b));
		break;
	case 1:
		printf("%d - %d = %f\n", a, b, calculate(sub, a, b));
		break;
	case 2:
		printf("%d * %d = %f\n", a, b, calculate(mul, a, b));
		break;
	case 3:
		printf("%d / %d = %f\n", a, b, calculate(div, a, b));
		break;
	}*/

	return 0;
}