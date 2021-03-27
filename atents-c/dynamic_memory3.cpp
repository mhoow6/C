#include <stdio.h>
#include <stdlib.h>

typedef struct tagStudent {
	int age;
	int grade;
} Student;


int main() {
	// 지역변수 및 정적변수는 컴파일 타임에 사이즈가 결정됨

	// 실행중에 저장공간이 필요할 때 공간을 만들 수 있는 방법
	// 동적 변수
	// 메모리의 Heap 영역(동적 메모리 공간)에 저장됨

	int count = 0;
	printf("몇 개의 데이터를 입력하시겠습니까?");
	scanf_s("%d", &count);

	// 동적 배열로 됨
	// pa		* <- 주소 값을 가지고 있음 
	// Heap:	[Student][Student]..
	// 동적으로 만든 공간은 컴퓨터를 껐다 켜야 없어짐 -> 반드시 free() 함수를 통해 메모리 해제
	// 만약 해제를 안 하고 계속 만들면? bad-alloc 에러 발생(줄 수 있는 메모리가 없다)
	// 다른 언어에선 garbage-collection을 통해서 알아서 없애줌
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

	// 값 출력해보세요.
	for (int i = 0; i < count; i++)
	{
		printf("age: %d ", pa[i].age);
		printf("grade: %d\n", pa[i].grade);
	}

	free(pa); // 메모리 해제

	return 0;
}