#include <stdio.h>

typedef struct Student { // ����� ���� ������ Ÿ��
	int No; // ����ü ���
	int phoneNum;
	int birthday;
} Student; // 4 + 4 + 4 = 12bytes

void print(Student *a) {
	printf("student a.No: %d, a.PhoneNum: %d, a.birthday: %d\n", a->No, a->phoneNum, a->birthday);
}


int main() {
	Student a = {1000, 2000, 1920};

	print(&a); // 4 bytes�� �����Ѵ�!

	Student array[3];

	for (int i = 0; i < 3; i++) {
		printf("�й��� �Է��ϼ���: ");
		int no = 0;
		scanf_s("%d", &no);

		printf("��ȭ��ȣ�� �Է��ϼ���: ");
		int phoneNum = 0;
		scanf_s("%d", &phoneNum);

		printf("��������� �Է��ϼ���: ");
		int birthday = 0;
		scanf_s("%d", &birthday);

		array[i].No = no;
		array[i].phoneNum = phoneNum;
		array[i].birthday = birthday;
	}

	for (int i = 0; i < 3; i++) {
		printf("student[%d].No: %d, PhoneNum: %d, birthday: %d\n", i, array[i].No, array[i].phoneNum, array[i].birthday);
	}
	
	return 0;
}