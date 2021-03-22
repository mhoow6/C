#include <stdio.h>

int main() {
	int array[100];
	int* parray = array; // 데이터 타입 = int형 포인터

	int a = 20; // int형
	int* pa = &a; // int형의 주소 값을 담고 있음
	int** ppa = &pa; // int형 포인터의 포인터 주소 값을 담고 있음
	int*** pppa = &ppa; // int형 포인터의 포인터의 포인터 주소 값을 담고 있음

	printf("array 주소: %p, array 주소: %p\n", array, parray);
	printf("a 주소: %p, pa 주소: %p\n", &a, pa);

	// 포인터의 값들 출력해보기
	printf("a 값: %d, a 주소: %p\n", a, &a);
	printf("a 값: %d, a 주소: %p\n", *pa, pa);
	printf("a 값: %d, a 주소: %p\n", **ppa, *ppa);
	printf("a 값: %d, a 주소: %p\n", ***pppa, **pppa);

	return 0;
}