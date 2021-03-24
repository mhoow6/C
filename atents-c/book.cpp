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
		puts("\n���ϴ� �޴��� �����ϼ���");
		puts("1. ���� �Է�");
		puts("2. ���� ���");
		puts("3. ���� �˻�");
		puts("0. ���� ");

		// Enter�� ���ۿ� ���̱� ������ gets()���� �״�� �Ѿ������ ���� �߻� -> ���ۿ��� Enter ����
		// %*c �� %c�� �����ٴ� �ǹ�
		scanf_s("%d%*c", &sel); 

		// �Է� ���۸� ���. �ٵ� �� �� ������?
		// VS 2015���� fflush�� ������ ������ �°� ��� ���۸� ���� �뵵�θ� ����ϰԲ� �ٲ�
		// fflush(stdin)�ص� �� ����
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
			puts("0~3 ������ �޴���ȣ�� �����ϼ���");
		}

	}
	return 0;
}

int inBook(BOOK* mb, int cnt)
{
	while (1) {
		printf("\nå�ڵ� : ");
		gets_s(mb[cnt].bookCode, sizeof(mb[cnt].bookCode));

		// ���� �ڵ尡 �������� �����ڵ�

		if (strlen(mb[cnt].bookCode) == 8)
		{
			int number = strcspn(mb[cnt].bookCode, "0123456789-"); // �̰� �� �� �������� �˾Ƴ���
			printf("%d", number);
			if (number == 8 && number != 0)
				break;
		}
		printf("\nå�ڵ带 �ٽ� Ȯ���ϼ��� [����: xxxx-xxx]");
	}

	printf("å���� : ");
	gets_s(mb[cnt].bookTitle, sizeof(mb[cnt].bookTitle));
	printf("���� : ");
	gets_s(mb[cnt].bookAuthor, sizeof(mb[cnt].bookAuthor));
	printf("���� : ");
	scanf_s("%d", &mb[cnt].bookPrice);
	printf("������ : ");
	scanf_s("%d", &mb[cnt].bookSale);
	printf("å�ڵ� : ");
	gets_s(mb[cnt].bookCode, sizeof(mb[cnt].bookCode));

	return ++cnt;
}

void outBook(BOOK* mb, int cnt)
{
	char sKey[20];
	int i, op;
	char* year;
	int check = 0;

	puts("\n\n���ϴ� �޴��� �����ϼ���");
	puts("1. ��ü��� ");
	puts("2. �⵵����� ");
	scanf_s("%d%*c", &op);


	switch (op) {
	case 1: for (i = 0; i < cnt; i++) {
		printf("\n-----------------------------------");
		printf("\n���� : %s \n", mb[i].bookTitle);
		printf("���� : %s \n", mb[i].bookAuthor);
		printf("���� : %d \n", mb[i].bookPrice);
		printf("���� : %d \n", mb[i].bookSale);
	}
	case 2: for (i = 0; i < cnt; i++)
	{
		printf("\n�˻��� ���ǿ����� �Է��ϼ��� : ");
		gets_s(sKey, sizeof(sKey));
		printf("\n---------------------------------- - ");
		printf("\n % 10s % 30s\n", "�� ��", "�� ��");
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
			printf("\n��ġ�ϴ� å�� �����ϴ�. \n");
		}
	}
	}

	
}

void searchBook(BOOK* mb, int cnt)
{
	char sTitle[50];
	int i, search, check = 0;
	puts("\n���ϴ� �޴��� �����ϼ���");
	puts("1. ���� �˻� ");
	puts("2. ���� �˻� ");
	scanf_s("%d", &search);
	fflush(stdin);
	switch (search) {
	case 1: printf("\n�˻��� ������ �Է��ϼ���: ");
		gets_s(sTitle, sizeof(sTitle));
		for (i = 0; i < cnt; i++)
		{
			if (strstr(mb[i].bookTitle, sTitle) != NULL)
			{
				printf("\n\n---------------------------------- - ");
				printf("\n�� �� : % s \n", mb[i].bookCode);
				printf("�� �� : % s \n", mb[i].bookTitle);
				printf("�� �� : % s \n", mb[i].bookAuthor);
				printf("�� �� : % d \n", mb[i].bookPrice);
				printf("�Ǹż��� : % d \n", mb[i].bookSale);
				check++;
			}
		}
		if (check)
		{
			printf("\n---------------------------------- - ");
			printf("\\�˻� �Ǽ� : %d \n", check);
		}
		else
		{
			printf("\n---------------------------------- - ");
			printf("\n��ġ�ϴ� å�� �����ϴ�. \n");
		}
	}
}