#include <stdio.h>
int main()
{
	// const Ű���� ���Ž� ���� �߻�
	// �ذ�å: ������Ʈ(P) > �Ӽ�(P) > C/C++ > ��� > �ؼ� ��� > �ƴϿ�
	char* str = "good morning";

	// str[0] = "m"; // ���ڿ� ����� ������ ���� ���� 

	printf("%p", str);
	printf("\n");
	printf("%c", *(str + 0));
	printf("\n");
	printf("%s", str); // \0(NULL)�� ���������� ���
	printf("\n");
	
	return 0;
}