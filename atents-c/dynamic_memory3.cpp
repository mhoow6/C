#include <stdio.h>
#include <stdlib.h>

typedef struct tagStudent {
	int age;
	int grade;
} Student;


int main() {
	// �������� �� ���������� ������ Ÿ�ӿ� ����� ������

	// �����߿� ��������� �ʿ��� �� ������ ���� �� �ִ� ���
	// ���� ����
	// �޸��� Heap ����(���� �޸� ����)�� �����

	int count = 0;
	printf("�� ���� �����͸� �Է��Ͻðڽ��ϱ�?");
	scanf_s("%d", &count);

	// ���� �迭�� ��
	// pa		* <- �ּ� ���� ������ ���� 
	// Heap:	[Student][Student]..
	// �������� ���� ������ ��ǻ�͸� ���� �Ѿ� ������ -> �ݵ�� free() �Լ��� ���� �޸� ����
	// ���� ������ �� �ϰ� ��� �����? bad-alloc ���� �߻�(�� �� �ִ� �޸𸮰� ����)
	// �ٸ� ���� garbage-collection�� ���ؼ� �˾Ƽ� ������
	Student* pa = (Student*)malloc(sizeof(Student) * count); 

	int age = 0;
	int grade = 0;

	for (int i = 0; i < count; i++)
	{
		printf("age: ");
		scanf_s("%d", &age);

		printf("grade: ");
		scanf_s("%d", &grade);

		pa[i].age = age;
		pa[i].grade = grade;
	}

	// �� ����غ�����.
	for (int i = 0; i < count; i++)
	{
		printf("age: %d ", pa[i].age);
		printf("grade: %d\n", pa[i].grade);
	}

	free(pa); // �޸� ����

	return 0;
}