#include <stdio.h>

int main() {
Start:

	int oper = 0;
	printf("+, -, x, / �� �����ּ���. ");
	scanf_s("%c", &oper); // ���ڰ� �ƽ�Ű �ڵ�� ��ȯ��
	printf("oper(ASCII): %d\n", oper);
	int left = 20;
	int right = 30;

	// goto Start; // ����� �б� (������� ����)

	if (oper == '+') {
		goto ADD; // ������ �б�
	}
	else if (oper == '-') {
		goto SUB;
	}
	else if (oper == '*') {
		goto MUL;
	}
	else if (oper == '/') {
		goto DIV;
	}
	else {
		goto EXIT;
	}

ADD: // ����� �б�
	printf("%d + %d = %d\n", left, right, left + right);
	goto EXIT;

SUB:
	printf("%d - %d = %d\n", left, right, left - right);
	goto EXIT;

MUL:
	printf("%d * %d = %d\n", left, right, left * right);
	goto EXIT;

DIV:
	printf("%d / %d = %lf\n", left, right, (float) left / right);
	goto EXIT;

EXIT:
	return 0;
}