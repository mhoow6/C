#include <stdio.h>
#include "cal.h"

#define LINUX
#define MAX 100

/*************************
 * ���Ǻ� ������
 * �ü���� �°� ������ �����Ҷ�
 *************************/

/*************************
 * ���� ������
 * ���� �ϳ��� ������ ������
 *************************/
int main() {
	int a = 20;
	int b = 30;

	printf("MAX = %d", MAX); // �����ѹ� (���ڸ� �ǹ��ϴ� ����)

#ifdef WINDOWS
	printf("Windows");
#elif defined(LINUX)
	printf("Linux");
#else
	printf("etc");
#endif

	/*printf("%d + %d = %d\n", a, b, add(a, b));
	printf("%d - %d = %d\n", a, b, sub(a, b));
	printf("%d * %d = %d\n", a, b, mul(a, b));
	printf("%d / %d = %f\n", a, b, div(a, b));*/

	return 0;
}

