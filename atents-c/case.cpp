#include <stdio.h>

int main() {
	int a = 20;
	int b = 30;

	if (a > b) { // 단일 조건문 (조건이 하나)
		printf("a가 b보다 큽니다.");
	}

	if (a > b) { // 이중 조건문
		printf("a가 b보다 큽니다.");
	}
	else {
		printf("a가 b보다 작습니다.");
	}

	printf("\n");

	// 아버지 용돈 달라고 할 때
	int money = 0;
	printf("용돈의 액수를 입력하세요.: ");
	scanf_s("%d", &money);

	// 액수는 범위를 지정해서
	if (money > 50000 && money <= 100000) { // 다중 조건문
		printf("친구들과 저녁 먹기"); 
	}
	else if (money > 200000 && money <= 300000) {
		printf("옷 사기");
	}
	else if (money > 100000 && money <= 200000) {
		printf("친구들과 놀기");
	}
	else if (money > 300000) {
		printf("저축하기");
	}
	else if (money > 10000 && money <= 50000) {
		printf("원하는 게임 사기");
	}
	else { // 안 써도 됌
		printf("공부나 해야지");
	}

	return 0;
}