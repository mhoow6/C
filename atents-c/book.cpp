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
		puts("\n���ϴ� �޴��� �����ϼ���.");
		puts("1. �����Է�");
		puts("2. �������");
		puts("3. �����˻�");
		puts("0. ����");
		scanf_s("%d%*c", &sel);

		//fflush(stdin); // �۵� �� ��

		switch (sel) {
		case 1: myBook = inBook(myBook, &totalBCnt); break;
		case 2: outBook(myBook, totalBCnt); break;
		case 3: searchBook(myBook, totalBCnt); break;
		case 0: return 0;
		default: puts("0 ~ 3 ������ �޴� ��ȣ�� �����ϼ���");
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
			printf("\nå�ڵ�: "); // xxxx-xxx
			gets_s(mb[cnt].bookCode, sizeof(mb[cnt].bookCode)+1);

			// å �ڵ� ������ �ùٸ��� �˻��ϴ� �ڵ�

			printf("å����: ");
			gets_s(mb[cnt].bookTitle, sizeof(mb[cnt].bookTitle));
			printf("����: ");
			gets_s(mb[cnt].bookAuthor, sizeof(mb[cnt].bookAuthor));
			printf("����: ");
			scanf_s("%d%*c", &mb[cnt].bookPrice);
			printf("�Ǹ� ����: ");
			scanf_s("%d*c", &mb[cnt].bookSale);
			printf("\n ��� �Է��Ͻðڽ��ϱ�?(Y/N)");
			yn = _getche(); // �Է� ���۰� �� ������ y �Է½� å �ڵ� �Է� ��ŵ ���� �߻�
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
		puts("\n\n���ϴ� �޴��� �����ϼ���");
		puts("1. ��ü���");
		puts("2. �⵵�����");
		puts("3. ����Ʈ����");
		scanf_s("%d%*c", &op);

		/*fflush(stdin);*/

		switch (op) {
		case 1:
			for (i = 0; i < cnt; i++) {
				printf("\n\n---------------------------------- - ");
				printf("\n�� �� : % s \n", mb[i].bookCode);
				printf("�� �� : % s \n", mb[i].bookTitle);
				printf("�� �� : % s \n", mb[i].bookAuthor);
				printf("�� �� : % d \n", mb[i].bookPrice);
				printf("�Ǹż��� : % d \n", mb[i].bookSale);
			}
			break;

		case 2:
			for (i = 0; i < cnt; i++)
			{
				printf("\n�˻��� ���ǿ����� �Է��ϼ��� : ");
				gets_s(skey, sizeof(skey));
				printf("\n-----------------------------------");
				printf("\n %10s %30s\n", "�� ��", "�� ��");
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
					printf("\n��ġ�ϴ� å�� �����ϴ�. \n");
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
		printf("\n ��� �Է��Ͻðڽ��ϱ�?(Y/N)");
		yn = _getche();
		rewind(stdin); // rewind�Լ��� �Ű������� ���� ��Ʈ���� �ʱ�ȭ�ϴµ� ���
	} while (yn == 'y');
}

void searchBook(BOOK* mb, int cnt)
{
	char sTitle[50];
	int i, search, check = 0;
	puts("\n���ϴ� �޴��� �����ϼ���");
	puts("1. ���� �˻� ");
	puts("2. ���� �˻� ");
	scanf_s("%d%*c", &search);
	/*fflush(stdin);*/
	switch (search) {
	case 1: printf("\n�˻��� ������ �Է��ϼ���: ");
		gets_s(sTitle, sizeof(sTitle));
		for (i = 0; i < cnt; i++)
		{
			if (strstr(mb[i].bookTitle, sTitle) != NULL)
			{
				printf("\n\n-----------------------------------");
				printf("\n�� �� : %s \n", mb[i].bookCode);
				printf("�� �� : %s \n", mb[i].bookTitle);
				printf("�� �� : %s \n", mb[i].bookAuthor);
				printf("�� �� : %d \n", mb[i].bookPrice);
				printf("�Ǹż��� : %d \n", mb[i].bookSale);
				check++;
			}
		}
		if (check)
		{
			printf("\n-----------------------------------");
			printf("\n�˻� �Ǽ� : %d \n", check);
		}
		else
		{
			printf("\n-----------------------------------");
			printf("\n��ġ�ϴ� å�� �����ϴ�. \n");
		}

	case 2:
		// ���� �˻�
		break;
	}
}