// ���� �޸� (char, int, float, *...)
//	�޸� �Ҵ� - ������ �ð��� �̷����
//	�޸� ���� - �ڵ����� ����

// ���� �޸�
//	�޸� �Ҵ� - ���� �ð��� �̷����
//	�޸� ���� - ���������
//	�뵵
//		�������� ������ �̸� �� �� ���� ��
//		�������̰ų� ���� ���� ū ���

// �Լ�
//	malloc(�޸� �� ũ��)
//	calloc(�޸� ũ��, �޸� ����)
//	realloc(������, ���Ҵ� ũ��)
//	free(������)

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* a;
	int size;
	scanf_s("%d", &size);
	a = (int*)calloc(sizeof(int), size);

	free(a);
	return 0;
}