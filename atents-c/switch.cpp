#include <stdio.h>

int main() {
	
	int buttonNumber = 0;
	printf("��ư�� �����ּ���: ");
	scanf_s("%d", &buttonNumber);

	// TV ������ ����� 4�� �߰��ؼ� �ۼ�
	switch (buttonNumber) { // �������� ��ȭ�� ���ؼ� �б��ų��..
	case 0:
		printf("TV ��");
		break;
	case 1:
		printf("TV ��");
		break;
	case 5:
		printf("ä�� -");
		break;
	case 6:
		printf("ä�� +");
		break;
	case 10:
		printf("���� �÷�");
		break;
	case 11:
		printf("���� ����");
		break;
	default:
		printf("�߸��� �Է�");
		break;
	}
}