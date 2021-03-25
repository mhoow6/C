// 함수의 주소를 저장하는 변수
// 리턴타입 (*함수 포인터명)(매개변수리스트);

// 프로그램 코드 간결화
// 배열로 처리함으로써 중복 코드 제거 가능
// 상황에 따른 함수 호출
// 함수를 데이터 형태로 처리 →함수의 보관과 전달이 용이

#include <stdio.h>
void hello() // 함수가 컴파일되어 메모리에 저장되있음
{
	printf("Hello, world!\n");
}
void good()
{
	printf("Good morning!\n");
}

int main()
{
	void (*fp)();
	fp = hello; // 메모리에 저장된 함수의 주소를 저장
	fp();
	fp = good;
	fp();
	return 0;
}