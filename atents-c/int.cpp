#include <stdio.h>

int add(int left, int right) {
	int result = left + right;
	return result;
}

 //returntype �Լ���(�Ű�����) {
 //			�ڵ�
 //}
int main() { // main �Լ�: ���α׷��� ������, entrypoint

	/* �޸𸮿� 4byte ������ �Ҵ�����
	 �� 4byte ������ ����ִ� �������� �������� ����������� ����Ҳ���
	 �׸��� �� ������ num�̶�� �̸����� ����!*/
	int num = 10000;

	short num2 = 5000;
	long num3 = 3333;

	// A void* can be converted to any other pointer type without an explicit cast.
	printf("%p\n", (void *)&num);

	printf("num=%d, num2=%d, num3=%d\n", num, num2, num3);

	num = 2000;
	num2 = 1011;
	num3 = 1231231;

	printf("num=%d, num2=%d, num3=%d\n", num, num2, num3);

	int a = 20;
	int b = 30;

	int result = add(a, b);

	printf("%d + %d = %d\n", a, b, result);

	// �ش� �Լ��� ���������� ������ �ü�� (Windows, Linux ��) ���� ����� ���� ��ȯ�ϰ� ���� ���� ���� �ش� �Լ��� ����ڴٴ� ��
	// �ü�� OS (Operating System) ���� ������ ������ �˸� �� 0�� ����
	return 0;
}