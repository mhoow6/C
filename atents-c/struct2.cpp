#include <stdio.h>

typedef struct Student { // 사용자 정의 데이터 타입
	int No; // 구조체 멤버
	int phoneNum;
	int birthday;
} Student; // 4 + 4 + 4 = 12bytes

void print(Student *a) {
	printf("student a.No: %d, a.PhoneNum: %d, a.birthday: %d\n", a->No, a->phoneNum, a->birthday);
}


int main() {
	Student a = {1000, 2000, 1920};

	print(&a); // 4 bytes만 전달한다!

	Student array[3];

	for (int i = 0; i < 3; i++) {
		printf("학번을 입력하세요: ");
		int no = 0;
		scanf_s("%d", &no);

		printf("전화번호를 입력하세요: ");
		int phoneNum = 0;
		scanf_s("%d", &phoneNum);

		printf("생년월일을 입력하세요: ");
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