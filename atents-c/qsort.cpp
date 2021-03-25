// 퀵 정렬 알고리즘

#include <stdio.h>
#include <stdlib.h>
int values[] = { 40, 10, 100, 90, 20, 25 };

// 오름차순
// a < b -> <0을 반환
// a = b -> 0을 반환
// a > b -> >0을 반환

// 내림차순으로 하고 싶으면 반대로 동작하게 하면 됌
int compare(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}
int main()
{
	int n;
	
	// 테이블 포인터의 주소, 테이블에 들어있는 데이터 개수,
	// 한 개 요소의 크기, 두 요소를 비교하기 위한 함수 포인터
	// 함수 포인터는 두 개의 매개변수를 가짐
	qsort(values, 6, sizeof(int), compare);
	for (n = 0; n < 6; n++)
		printf("%d", values[n]);
	return 0;
}


