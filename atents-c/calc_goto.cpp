#include <stdio.h>

int main() {
Start:

	int oper = 0;
	printf("+, -, x, / 을 눌러주세요. ");
	scanf_s("%c", &oper); // 문자가 아스키 코드로 변환됨
	printf("oper(ASCII): %d\n", oper);
	int left = 20;
	int right = 30;

	// goto Start; // 상향식 분기 (사용하지 말자)

	if (oper == '+') {
		goto ADD; // 무조건 분기
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

ADD: // 하향식 분기
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