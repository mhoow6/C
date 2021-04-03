#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	FILE* fp; // ���Ͻ�Ʈ���� �ּҸ� ������ ������

	fp = fopen("test.txt", "w"); // Output ��Ʈ�� ����

	// ������ ��� ���⿡ ����
	if (fp == NULL) {
		printf("���Ͽ��� ���� \n");
		return 0;
	}

	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);

	fclose(fp); // ���� ��Ʈ�� �ݱ�

	fp = fopen("test.txt", "r"); // Input ��Ʈ�� ����
	int c = 0;

	if (fp == NULL) {
		printf("���Ͽ��� ���� \n");
		return 0;
	}

	// ������ ��(EOF)���� �ݺ�
	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}

	return 0;
}