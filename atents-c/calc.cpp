#include <stdio.h>

int main() {
	int oper = 0;
	printf("+, -, x, / �� �����ּ���. ");
	scanf_s("%c", &oper); // ���ڰ� �ƽ�Ű �ڵ�� ��ȯ��
	printf("oper(ASCII): %d\n", oper);
	int left = 20;
	int right = 30;

	switch (oper) {
	case '+':
		printf("%d + %d = %d\n", left, right, left + right);
		break;
	case '-':
	{
		int result = left - right;
		printf("%d - %d = %d\n", left, right, result);
		break;
	}
	case '*':
	{
		int result = left * right;
		printf("%d * %d = %d\n", left, right, result);
		break;
	}
	case '/':
	{
		double result = (double)left / right;
		printf("%d / %d = %lf\n", left, right, result);
		break;
	}
		
	}
}