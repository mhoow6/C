#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* a, str[20];
	a = (char*)calloc(1, 1);
	if (a == NULL) printf("Fail Allocation");
	while (1) {
		printf("���ο� ���ڿ� �Է�: ");
		gets_s(str,sizeof(str));

		if (!strcmp(str, "end")) // end �Է½� ����
			break;

		// ���� �� ����?
		a = (char*)realloc(a, strlen(str) + 1); // �Է¹��� ���ڿ�(str) + 1 ũ�� ��ŭ �޸� ���Ҵ�
		strcat_s(a, sizeof(a), str); // �Է¹��� ���ڿ��� a�� ����
	}
	printf("\n%s", a);
	free(a);
	return 0;
}