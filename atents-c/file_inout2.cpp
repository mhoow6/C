#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	FILE* fp;
	char name[20];

	int age;
	double height;
	double ave_age = 0;

	if ((fp = fopen("user_info.txt", "w")) == NULL) {
		printf("File open Fail?");
		return 0;
	}

	int i;

	for (i = 0; i < 3; i++) {
		printf("%d��° ���������� �Է�(����, �̸�, Ű ��):", i);
		scanf("%d %s %lf", &age, name, &height);
		fprintf(fp, "%d %s %lf\n", age, name, height);
	}

	fclose(fp);

	

	if ((fp = fopen("user_info.txt", "r")) == NULL) {
		printf("File open Fail?");
		return 0;
	}


	for (i = 0; i < 3; i++) {
		fscanf(fp, "%d %s %lf", &age, name, &height);
		printf("%d��° age: %d, �̸�: %s, Ű: %lf\n", i, age, name, height);
		ave_age += (double)age;
	}

	printf("��ճ���: %0.2lf\n", ave_age / 3);
	fclose(fp);

	return 0;
}