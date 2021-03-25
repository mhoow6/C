#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* a, str[20];
	a = (char*)calloc(1, 1);
	if (a == NULL) printf("Fail Allocation");
	while (1) {
		printf("새로운 문자열 입력: ");
		gets_s(str,sizeof(str));

		if (!strcmp(str, "end")) // end 입력시 종료
			break;

		// 버퍼 왜 작지?
		a = (char*)realloc(a, strlen(str) + 1); // 입력받은 문자열(str) + 1 크기 만큼 메모리 재할당
		strcat_s(a, sizeof(a), str); // 입력받은 문자열을 a에 복사
	}
	printf("\n%s", a);
	free(a);
	return 0;
}