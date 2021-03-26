#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

typedef struct book {
	char bookTitle[50];
	char bookAuthor[20];
	int bookPrice;
	int bookSale;
	char bookCode[8];
}BOOK;

BOOK* inBook(BOOK*, int*);
void outBook(BOOK*, int);
void searchBook(BOOK*, int);

int main() {
	int sel, totalBCnt = 0;
	BOOK* myBook;
	myBook = (BOOK*)calloc(2, sizeof(BOOK));

	while (1) {
		puts("\n원하는 메뉴를 선택하세요.");
		puts("1. 도서입력");
		puts("2. 도서출력");
		puts("3. 도서검색");
		puts("0. 종료");
		scanf_s("%d%*c", &sel);

		//fflush(stdin); // 작동 안 함

		switch (sel) {
		case 1: myBook = inBook(myBook, &totalBCnt); break;
		case 2: outBook(myBook, totalBCnt); break;
		case 3: searchBook(myBook, totalBCnt); break;
		case 0: return 0;
		default: puts("0 ~ 3 사이의 메뉴 번호를 선택하세요");
		}
	}

	return 0;
}

BOOK* inBook(BOOK* mb, int* cn) {
	char yn = ' ';
	int cnt;
	cnt = *cn;

	do {
		
			mb = (BOOK*)realloc(mb, sizeof(BOOK) * (cnt + 2));
			/*fflush(stdin);*/
			printf("\n책코드: "); // xxxx-xxx
			gets_s(mb[cnt].bookCode, sizeof(mb[cnt].bookCode)+1);

			// 책 코드 형식이 올바른지 검사하는 코드

			printf("책제목: ");
			gets_s(mb[cnt].bookTitle, sizeof(mb[cnt].bookTitle));
			printf("저자: ");
			gets_s(mb[cnt].bookAuthor, sizeof(mb[cnt].bookAuthor));
			printf("가격: ");
			scanf_s("%d%*c", &mb[cnt].bookPrice);
			printf("판매 수량: ");
			scanf_s("%d*c", &mb[cnt].bookSale);
			printf("\n 계속 입력하시겠습니까?(Y/N)");
			yn = _getche(); // 입력 버퍼가 안 지워져 y 입력시 책 코드 입력 스킵 현상 발생
			rewind(stdin);
			cnt++;
		 
	} while (yn == 'y');

	*cn = cnt;
	return mb;
}

int compare(const void* a, const void* b) {
	BOOK* ptr_a = (BOOK*)a;
	BOOK* ptr_b = (BOOK*)b;

	if (ptr_a->bookSale < ptr_b->bookSale) return 1;
	else if (ptr_a->bookSale == ptr_b->bookSale) return 0;
	else return -1;
}

void outBook(BOOK* mb, int cnt) {
	char skey[20];
	int i, op;
	char* year;
	int check = 0;
	char bestSeller[3][50];
	char yn;
	do {
		puts("\n\n원하는 메뉴를 선택하세요");
		puts("1. 전체출력");
		puts("2. 년도별출력");
		puts("3. 베스트셀러");
		scanf_s("%d%*c", &op);

		/*fflush(stdin);*/

		switch (op) {
		case 1:
			for (i = 0; i < cnt; i++) {
				printf("\n\n---------------------------------- - ");
				printf("\n코 드 : % s \n", mb[i].bookCode);
				printf("제 목 : % s \n", mb[i].bookTitle);
				printf("저 자 : % s \n", mb[i].bookAuthor);
				printf("가 격 : % d \n", mb[i].bookPrice);
				printf("판매수량 : % d \n", mb[i].bookSale);
			}
			break;

		case 2:
			for (i = 0; i < cnt; i++)
			{
				printf("\n검색할 출판연도를 입력하세요 : ");
				gets_s(skey, sizeof(skey));
				printf("\n-----------------------------------");
				printf("\n %10s %30s\n", "코 드", "제 목");
				for (i = 0; i < cnt; i++)
				{
					char* context = NULL;
					year = strtok_s(mb[i].bookCode, "-", &context);
					if (!strcmp(year, skey))
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
			break;

		case 3:
			qsort(mb, cnt + 1, sizeof(BOOK), compare);
			printf("\n---------------------------------\n");
			printf("\n---------BestSeller Top3---------\n");
			printf("\n---------------------------------\n");
			for (int i = 0; i < 3; i++) {
				printf("Top %d: %30s	Sale: %d\n", i+1, mb[i].bookTitle, mb[i].bookPrice);
			}
			printf("\n---------------------------------\n");
			break;
		}
		printf("\n 계속 입력하시겠습니까?(Y/N)");
		yn = _getche();
		rewind(stdin); // rewind함수는 매개변수로 들어온 스트림을 초기화하는데 사용
	} while (yn == 'y');
}

void searchBook(BOOK* mb, int cnt)
{
	char sTitle[50];
	int i, search, check = 0;
	puts("\n원하는 메뉴를 선택하세요");
	puts("1. 제목 검색 ");
	puts("2. 저자 검색 ");
	scanf_s("%d%*c", &search);
	/*fflush(stdin);*/
	switch (search) {
	case 1: printf("\n검색할 제목을 입력하세요: ");
		gets_s(sTitle, sizeof(sTitle));
		for (i = 0; i < cnt; i++)
		{
			if (strstr(mb[i].bookTitle, sTitle) != NULL)
			{
				printf("\n\n-----------------------------------");
				printf("\n코 드 : %s \n", mb[i].bookCode);
				printf("제 목 : %s \n", mb[i].bookTitle);
				printf("저 자 : %s \n", mb[i].bookAuthor);
				printf("가 격 : %d \n", mb[i].bookPrice);
				printf("판매수량 : %d \n", mb[i].bookSale);
				check++;
			}
		}
		if (check)
		{
			printf("\n-----------------------------------");
			printf("\n검색 건수 : %d \n", check);
		}
		else
		{
			printf("\n-----------------------------------");
			printf("\n일치하는 책이 없습니다. \n");
		}

	case 2:
		// 저자 검색
		break;
	}
}