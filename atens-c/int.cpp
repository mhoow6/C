#include <stdio.h>

int add(int left, int right) {
	int result = left + right;
	return result;
}

 //returntype 함수명(매개변수) {
 //			코드
 //}
int main() { // main 함수: 프로그램의 진입점, entrypoint

	/* 메모리에 4byte 공간을 할당해줘
	 그 4byte 공간에 들어있는 이진수를 십진수로 저장공간으로 사용할꺼야
	 그리고 그 공간을 num이라는 이름으로 쓴다!*/
	int num = 10000;

	short num2 = 5000;
	long num3 = 3333;

	// A void* can be converted to any other pointer type without an explicit cast.
	printf("%p\n", (void *)&num);

	printf("num=%d, num2=%d, num3=%d\n", num, num2, num3);

	num = 2000;
	num2 = 1011;
	num3 = 1231231;

	printf("num=%d, num2=%d, num3=%d\n", num, num2, num3);

	int a = 20;
	int b = 30;

	int result = add(a, b);

	printf("%d + %d = %d\n", a, b, result);

	// 해당 함수를 정상적으로 끝내고서 운영체제 (Windows, Linux 등) 에게 기술한 값을 반환하고 현재 실행 중인 해당 함수를 벗어나겠다는 뜻
	// 운영체제 OS (Operating System) 에게 에러가 없음을 알릴 때 0을 리턴
	return 0;
}