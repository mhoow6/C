#include <stdio.h>

int main() {
	int array[100];
	int* parray = array; // ������ Ÿ�� = int�� ������

	int a = 20; // int��
	int* pa = &a; // int���� �ּ� ���� ��� ����
	int** ppa = &pa; // int�� �������� ������ �ּ� ���� ��� ����
	int*** pppa = &ppa; // int�� �������� �������� ������ �ּ� ���� ��� ����

	printf("array �ּ�: %p, array �ּ�: %p\n", array, parray);
	printf("a �ּ�: %p, pa �ּ�: %p\n", &a, pa);

	// �������� ���� ����غ���
	printf("a ��: %d, a �ּ�: %p\n", a, &a);
	printf("a ��: %d, a �ּ�: %p\n", *pa, pa);
	printf("a ��: %d, a �ּ�: %p\n", **ppa, *ppa);
	printf("a ��: %d, a �ּ�: %p\n", ***pppa, **pppa);

	return 0;
}