#include <stdio.h>

/********************
 * �Լ� ������
 ********************/


// �޸�(Code Segement)�� �ִ�
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

	// ���ϰ��� int���̰� �Ű������� int �� 2���� �޴� �Լ��ּҸ� �����ϴ� ����
	// �Լ������� ����
	// int(*pfunc)(int, int);

	// printf("%d + %d = %d\n", a, b, pfunc(a, b));

	// �Լ��������� ����
	// �Լ� ��ü�� �Ű������� �� �� �ִٴ� ���������� ���
	// ������ �ʴ� ������ fixed, ���ϴ� ������ �Ű������� �־���
	printf("%d + %d = %f\n", a, b, calculate(add, a, b));
	printf("%d + %d = %f\n", a, b, calculate(sub, a, b));
	printf("%d + %d = %f\n", a, b, calculate(mul, a, b));
	printf("%d + %d = %f\n", a, b, calculate(div, a, b));

	// ex. ����� �ٵϿ��� �����ǿ� ������� ���� ������ ����
	// ex. �ݹ��Լ�
	// 200�� ȸ�Ϳ��� �޽����� �����ٸ�? 
	return 0;
}