#include <stdio.h>
#include <string.h>

typedef struct book {
	char bookTitle[50];
	char bookAuthor[20];
	int bookPrice;
	int bookSale;
	char bookCode[9];
}BOOK;

int inBook(BOOK*, int);
void outBook(BOOK*, int);
void searchBook(BOOK*, int);

int main()
{
	int sel, totalBCnt = 0;
	BOOK myBook[100];
	while (1) {
		puts("\n원하는 메뉴를 선택하세요");
		puts("1. 도서 입력");
		puts("2. 도서 출력");
		puts("3. 도서 검색");
		puts("0. 종료 ");

		// Enter도 버퍼에 쌓이기 때문에 gets()에서 그대로 넘어가버리는 현상 발생 -> 버퍼에서 Enter 버림
		// %*c 는 %c를 버린다는 의미
		scanf_s("%d%*c", &sel); 

		// 입력 버퍼를 비움. 근데 왜 안 먹힐까?
		// VS 2015부터 fflush의 본래의 목적에 맞게 출력 버퍼를 비우는 용도로만 사용하게끔 바꿈
		// fflush(stdin)해도 안 먹힘
		fflush(stdin);

		switch (sel) {
		case 1: 
			totalBCnt = inBook(myBook, totalBCnt);
			break;
		case 2: 
			outBook(myBook,totalBCnt);
			break;
		case 3:
			searchBook(myBook,totalBCnt);
			break;
		case 0:
			return 0;
		default:
			puts("0~3 사이의 메뉴번호를 선택하세요");
		}

	}
	return 0;
}

int inBook(BOOK* mb, int cnt)
{
	while (1) {
		printf("\n책코드 : ");
		gets_s(mb[cnt].bookCode, sizeof(mb[cnt].bookCode));

		// 앞의 코드가 연도인지 검증코드

		if (strlen(mb[cnt].bookCode) == 8)
		{
			int number = strcspn(mb[cnt].bookCode, "0123456789-"); // 이거 왜 안 먹히는지 알아내자
			printf("%d", number);
			if (number == 8 && number != 0)
				break;
		}
		printf("\n책코드를 다시 확인하세요 [형식: xxxx-xxx]");
	}

	printf("책제목 : ");
	gets_s(mb[cnt].bookTitle, sizeof(mb[cnt].bookTitle));
	printf("저자 : ");
	gets_s(mb[cnt].bookAuthor, sizeof(mb[cnt].bookAuthor));
	printf("가격 : ");
	scanf_s("%d", &mb[cnt].bookPrice);
	printf("재고수량 : ");
	scanf_s("%d", &mb[cnt].bookSale);
	printf("책코드 : ");
	gets_s(mb[cnt].bookCode, sizeof(mb[cnt].bookCode));

	return ++cnt;
}

void outBook(BOOK* mb, int cnt)
{
	char sKey[20];
	int i, op;
	char* year;
	int check = 0;

	puts("\n\n원하는 메뉴를 선택하세요");
	puts("1. 전체출력 ");
	puts("2. 년도별출력 ");
	scanf_s("%d%*c", &op);


	switch (op) {
	case 1: for (i = 0; i < cnt; i++) {
		printf("\n-----------------------------------");
		printf("\n제목 : %s \n", mb[i].bookTitle);
		printf("저자 : %s \n", mb[i].bookAuthor);
		printf("가격 : %d \n", mb[i].bookPrice);
		printf("수량 : %d \n", mb[i].bookSale);
	}
	case 2: for (i = 0; i < cnt; i++)
	{
		printf("\n검색할 출판연도를 입력하세요 : ");
		gets_s(sKey, sizeof(sKey));
		printf("\n---------------------------------- - ");
		printf("\n % 10s % 30s\n", "코 드", "제 목");
		for (i = 0; i < cnt; i++)
		{
			char* context = NULL;
			year = strtok_s(mb[i].bookCode, "-", &context);
			if (!strcmp(year, sKey))
			{
				printf("\n%10s %30s", mb[i].bookCode, mb[i].bookTitle);
				check++;
			}
		}
		if (check == 0)
		{
			printf("\n일치하는 책이 없습니다. \n");
		}
	}
	}

	
}

void searchBook(BOOK* mb, int cnt)
{
	char sTitle[50];
	int i, search, check = 0;
	puts("\n원하는 메뉴를 선택하세요");
	puts("1. 제목 검색 ");
	puts("2. 저자 검색 ");
	scanf_s("%d", &search);
	fflush(stdin);
	switch (search) {
	case 1: printf("\n검색할 제목을 입력하세요: ");
		gets_s(sTitle, sizeof(sTitle));
		for (i = 0; i < cnt; i++)
		{
			if (strstr(mb[i].bookTitle, sTitle) != NULL)
			{
				printf("\n\n---------------------------------- - ");
				printf("\n코 드 : % s \n", mb[i].bookCode);
				printf("제 목 : % s \n", mb[i].bookTitle);
				printf("저 자 : % s \n", mb[i].bookAuthor);
				printf("가 격 : % d \n", mb[i].bookPrice);
				printf("판매수량 : % d \n", mb[i].bookSale);
				check++;
			}
		}
		if (check)
		{
			printf("\n---------------------------------- - ");
			printf("\\검색 건수 : %d \n", check);
		}
		else
		{
			printf("\n---------------------------------- - ");
			printf("\n일치하는 책이 없습니다. \n");
		}
	}
}