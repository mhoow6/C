#include <stdio.h>

int main() {
	int a = 20;

	// ����������: ������ �����ڸ� �̿��Ͽ� ������ ��� ���� �߻�
	int c = ++a; // ������: a���� ������ ���� c�� ����
	printf("c = %d, a = %d\n", c, a);
	
	c = a++; // ������: a�� ���� ������ ������ ������
	printf("c = %d, a = %d\n", c, a);

	// -- �����ڸ� �̿��ؼ� �ٽ� �ۼ�
	c = --a; // ������: a���� ������ ���� c�� ����
	printf("c = %d, a = %d\n", c, a);

	c = a--; // ������: a�� ���� ������ ������ ������
	printf("c = %d, a = %d\n", c, a);
}