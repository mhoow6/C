#include <stdio.h>

int main() {

	int value = 0;

	//while (1) { // ���ѷ���
	//	printf("���� �Է��ϼ���: (Exit: -1) ");
	//	scanf_s("%d", &value);

	//	if (value == -1) {
	//		break; // �ݺ��� Ż���� �� ���
	//	}

	//	printf("�ԷµȰ���: %d\n", value);
	//}

	//for (int i = 0; i < 100; i++) {
	//	if (i % 4 != 0) {
	//		continue; // ���� �ݺ�(i -> i++)���� �Ѿ��.
	//	}

	//	printf("%d\n", i);
	//}

	float value = 1000.904f;
	while (1) {
		while (value > 0) {
			value -= 3.4f;
			printf("value: %lf\n", value);
			if (value < 10) {
				goto Exit;
			}
		}
	}

Exit:
	return 0;
}