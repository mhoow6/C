enum {
	MAX = 100,
	MIN = 200
};

// �����͸� ���ο��� �����Ű�� ���ϰ� ������ �ο�
void print(const int* pa) {
	// *pa = 100;
	printf("%d", *pa);
}

#include <stdio.h>
int main() {
	int a = 20;
	int b = 20;

	// const ������ ������� ��� �Ǿ� �� ��ü�� �Ǿ������
	// ������ ���ÿ� �ʱ�ȭ�ؾߵȴ�.
	const int NUM = 300;
	// NUM = 200;

	printf("%d", MAX);
	printf("%d", MIN);
	printf("%d", NUM);

	// a�� ���� ��ȣ���ִ� ����
	// �����Ϳ� ����ִ� ���� ���� ����
	const int* pa = &a;
	// *pa = 100;
	pa = &b;

	// ������ ��ü�� ��ȣ���ִ� ����
	// a�� ���� ���� ����
	int* const pb = &b;
	*pb = 100;
	// pb = &a;


	// �� �� ��ȣ�ϰ� ���� ���
	const int* const pc = &a;
	// pc = &b;
	// *pc = 100;

	return 0;
}