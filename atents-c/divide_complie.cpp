#include <stdio.h>
#include "cal.h"

#define LINUX
#define MAX 100

/*************************
 * 조건부 컴파일
 * 운영체제에 맞게 로직을 수정할때
 *************************/

/*************************
 * 분할 컴파일
 * 파일 하나를 나눠서 컴파일
 *************************/
int main() {
	int a = 20;
	int b = 30;

	printf("MAX = %d", MAX); // 매직넘버 (숫자를 의미하는 문장)

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

