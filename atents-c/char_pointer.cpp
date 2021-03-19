#include <stdio.h>
int main()
{
	// const 키워드 제거시 오류 발생
	// 해결책: 프로젝트(P) > 속성(P) > C/C++ > 언어 > 준수 모드 > 아니요
	char* str = "good morning";

	// str[0] = "m"; // 문자열 상수를 조작할 수는 없음 

	printf("%p", str);
	printf("\n");
	printf("%c", *(str + 0));
	printf("\n");
	printf("%s", str); // \0(NULL)을 만날때까지 출력
	printf("\n");
	
	return 0;
}