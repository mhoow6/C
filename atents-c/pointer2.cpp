#include <stdio.h>

int main() {
	int a = 20;
	int b = 40;

	int* pa = &a;
	int* pb = &b;

	int** ppa = &pa;
	int** ppb = &pb;

	// pa�� pb ���� �𸥴ٰ� ����
	// pa�� pb�� ���� �����Ͽ� ppa = b�� ����Ű��, ppb�� a������ ����Ű�� �϶�

	int* temp = pb;
	pb = pa;
	pa = temp;

	printf("**ppa: %d\n", **ppa);
	printf("**ppb: %d\n", **ppb);

	return 0;
}