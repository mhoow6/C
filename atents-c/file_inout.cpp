#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	FILE* fp; // 파일스트림의 주소를 저장할 포인터

	fp = fopen("test.txt", "w"); // Output 스트림 생성

	// 파일이 없어서 열기에 실패
	if (fp == NULL) {
		printf("파일열기 실패 \n");
		return 0;
	}

	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);

	fclose(fp); // 파일 스트림 닫기

	fp = fopen("test.txt", "r"); // Input 스트림 생성
	int c = 0;

	if (fp == NULL) {
		printf("파일열기 실패 \n");
		return 0;
	}

	// 파일의 끝(EOF)까지 반복
	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}

	return 0;
}