#include <stdio.h>

int main() {
	
	int buttonNumber = 0;
	printf("버튼을 눌러주세요: ");
	scanf_s("%d", &buttonNumber);

	// TV 리모컨 기능을 4개 추가해서 작성
	switch (buttonNumber) { // 정수값의 변화에 의해서 분기시킬때..
	case 0:
		printf("TV 켜");
		break;
	case 1:
		printf("TV 꺼");
		break;
	case 5:
		printf("채널 -");
		break;
	case 6:
		printf("채널 +");
		break;
	case 10:
		printf("볼륨 올려");
		break;
	case 11:
		printf("볼륨 내려");
		break;
	default:
		printf("잘못된 입력");
		break;
	}
}