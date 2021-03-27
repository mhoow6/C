#include <stdio.h>

int main() {
	int a = 20;
	int b = 40;

	int* pa = &a;
	int* pb = &b;

	int** ppa = &pa;
	int** ppb = &pb;

	// pa와 pb 값을 모른다고 가정
	// pa와 pb의 값을 변경하여 ppa = b를 가리키고, ppb가 a변수를 가리키게 하라

	int* temp = pb;
	pb = pa;
	pa = temp;

	printf("**ppa: %d\n", **ppa);
	printf("**ppb: %d\n", **ppb);

	return 0;
}