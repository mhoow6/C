#include <stdio.h>
#include <stdlib.h>

typedef struct tagStudent {
	int age;
	int grade;
} Student;


int main() {
	Student array[10]; // �� 80byte

	array[0].age;
	array[0].grade;

	// Heap�� 80 byte �Ҵ�
	// void* : ���� �������� ���� ������
	Student* pstr = (Student*)malloc(sizeof(Student) * 3);

	// malloc: �����Ҵ縸 ����, �ʱ�ȭ X
	// calloc: �����Ҵ�, �ʱ�ȭ O
	Student* pstr2 = (Student*)calloc(3, sizeof(Student));

	for (int i = 0; i < 3; i++)
	{
		pstr[i].age = i;
		pstr[i].grade = i;
		printf("pstr[%d].age = %d\n", i, pstr[i].age);
	}

	/*for (int i = 0; i < 3; i++)
	{
		printf("pstr2[0].age = %d\n", pstr2[0].age);
	}*/

	// realloc: ������ ���Ҵ��Ҷ� ���
	// ������ �޸𸮰����� ���� ���� ������ ����ǰ�, free�Ǿ� �����ȴ�.
	Student* pstr3 = (Student*)realloc(pstr, sizeof(Student) * 10);

	for (int i = 0; i < 10; i++)
	{
		printf("pstr3[%d].age = %d\n", i, pstr3[i].age);
		printf("pstr3[%d].grade = %d\n", i, pstr3[i].grade);
	}

	/************* Output
		pstr[0].age = 0
		pstr[1].age = 1
		pstr[2].age = 2
		pstr3[0].age = 0
		pstr3[0].grade = 0
		pstr3[1].age = 1
		pstr3[1].grade = 1
		pstr3[2].age = 2
		pstr3[2].grade = 2
		pstr3[3].age = -842150451
		pstr3[3].grade = -842150451
		pstr3[4].age = -842150451
		pstr3[4].grade = -842150451
		pstr3[5].age = -842150451
		pstr3[5].grade = -842150451
		pstr3[6].age = -842150451
		pstr3[6].grade = -842150451
		pstr3[7].age = -842150451
		pstr3[7].grade = -842150451
		pstr3[8].age = -842150451
		pstr3[8].grade = -842150451
		pstr3[9].age = -842150451
		pstr3[9].grade = -842150451
	 *************/

	return 0;
}