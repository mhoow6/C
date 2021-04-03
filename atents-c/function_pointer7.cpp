#include <stdio.h>

/********************
 * 함수 포인터
 ********************/


// 메모리(Code Segement)에 있다
float add(int a, int b) {
	return (float) a + b;
}

float sub(int a, int b) {
	return (float) a - b;
}

float mul(int a, int b) {
	return (float) a * b;
}

float div(int a, int b) {
	return (float) a / b;
}

float calculate(float(*pfunc)(int, int), int a, int b) {
	return pfunc(a, b);
}

int main() {

	int a = 10;
	int b = 20;

	// 리턴값은 int형이고 매개변수는 int 형 2개를 받는 함수주소를 저장하는 변수
	// 함수포인터 변수
	// int(*pfunc)(int, int);

	// printf("%d + %d = %d\n", a, b, pfunc(a, b));

	// 함수포인터의 목적
	// 함수 자체를 매개변수로 쓸 수 있다는 장점때문에 사용
	// 변하지 않는 로직을 fixed, 변하는 로직을 매개변수로 넣어줌
	printf("%d + %d = %f\n", a, b, calculate(add, a, b));
	printf("%d + %d = %f\n", a, b, calculate(sub, a, b));
	printf("%d + %d = %f\n", a, b, calculate(mul, a, b));
	printf("%d + %d = %f\n", a, b, calculate(div, a, b));

	// ex. 오목과 바둑에서 오목판에 오목알을 놓는 로직은 같다
	// ex. 콜백함수
	// 200만 회훤에게 메시지를 보낸다면? 
	return 0;
}