#include <stdio.h>

int main() {
	int a = 20;

	// 증감연산자: 변수에 연산자를 이용하여 저장할 경우 차이 발생
	int c = ++a; // 전위식: a값이 증가한 다음 c에 대입
	printf("c = %d, a = %d\n", c, a);
	
	c = a++; // 후위식: a의 값을 대입한 다음에 증가함
	printf("c = %d, a = %d\n", c, a);

	// -- 연산자를 이용해서 다시 작성
	c = --a; // 전위식: a값이 감소한 다음 c에 대입
	printf("c = %d, a = %d\n", c, a);

	c = a--; // 후위식: a의 값을 대입한 다음에 감소함
	printf("c = %d, a = %d\n", c, a);
}