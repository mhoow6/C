#include <stdio.h>

int main() {

	/*�ʱ��: ���ǽ�: ������*/
	for (int i = 0, j = 0; i < 10 && j < 10; i++, j++) // ���� for ��
	{
		printf("%d\n", i);
	}

	printf("--------------------\n");

	// 0 ~ 100���� �ݺ��ϰ� ¦���� ����ϼ���.
	for (int i = 0; i < 101; i++)
	{
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
	}

	for (int i = 0; i < 101; i += 2)
	{
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
	}

	printf("--------------------\n");

	int result = 0;

	// 3�� ��� �̸鼭 4�� ����� ���� �ջ�
	for (int i = 0; i < 101; i++)
	{
		if (i % 3 == 0 && i % 4 == 0) {
			result += i;
		}
	}

	printf("%d\n", result);

	return 0;
}