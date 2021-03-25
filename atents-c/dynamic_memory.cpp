// 정적 메모리 (char, int, float, *...)
//	메모리 할당 - 컴파일 시간에 이루어짐
//	메모리 해제 - 자동으로 해제

// 동적 메모리
//	메모리 할당 - 실행 시간에 이루어짐
//	메모리 해제 - 명시적으로
//	용도
//		데이터의 개수를 미리 알 수 없을 때
//		유동적이거나 변동 폭이 큰 경우

// 함수
//	malloc(메모리 총 크기)
//	calloc(메모리 크기, 메모리 갯수)
//	realloc(포인터, 재할당 크기)
//	free(포인터)

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* a;
	int size;
	scanf_s("%d", &size);
	a = (int*)calloc(sizeof(int), size);

	free(a);
	return 0;
}