#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int buff[] = { 10, 20, 30, 40, 50 };
	int output[6];

	FILE* fp;

	int size, count;

	fp = fopen("binary.bin", "wb");
	
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return 0;
	}

	size = sizeof(int);
	count = sizeof(buff) / sizeof(int);

	fwrite(buff, size, count, fp); // 4byte�� 5�� ����
	fclose(fp);

	fp = fopen("binary.bin", "rb");

	if (fp == NULL) {
		printf("���� ���� ����\n");
		return 0;
	}

	int i;
	//for (i = 0; i < count; i++) {
	//	fread(&output[i], size, 1, fp); // 4byte 1���� �θ���

	//}

	fread(output, size, 5, fp);

	for (i = 0; i < count; i++) {
		printf("%d\n", output[i]);
	}

	return 0;
}