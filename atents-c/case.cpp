#include <stdio.h>

int main() {
	int a = 20;
	int b = 30;

	if (a > b) { // ���� ���ǹ� (������ �ϳ�)
		printf("a�� b���� Ů�ϴ�.");
	}

	if (a > b) { // ���� ���ǹ�
		printf("a�� b���� Ů�ϴ�.");
	}
	else {
		printf("a�� b���� �۽��ϴ�.");
	}

	printf("\n");

	// �ƹ��� �뵷 �޶�� �� ��
	int money = 0;
	printf("�뵷�� �׼��� �Է��ϼ���.: ");
	scanf_s("%d", &money);

	// �׼��� ������ �����ؼ�
	if (money > 50000 && money <= 100000) { // ���� ���ǹ�
		printf("ģ����� ���� �Ա�"); 
	}
	else if (money > 200000 && money <= 300000) {
		printf("�� ���");
	}
	else if (money > 100000 && money <= 200000) {
		printf("ģ����� ���");
	}
	else if (money > 300000) {
		printf("�����ϱ�");
	}
	else if (money > 10000 && money <= 50000) {
		printf("���ϴ� ���� ���");
	}
	else { // �� �ᵵ ��
		printf("���γ� �ؾ���");
	}

	return 0;
}