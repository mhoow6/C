//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void main() {
//	// seed값을 설정하는 함수가 srand()이며 srand()는 time()로 현재의 시간(초)를 대입 해 주는 것이다.
//	// 이로서 프로그램 실행시마다 전혀 새로운 시간 값을 입력 할 수 있다.
//	srand(time(NULL));
//
//	int randomValue = rand();
//
//	// 2와 8 사이의 숫자로 출력해보세요.
//	printf("randomValue: %d", randomValue % 7 + 2);
//	
//
//	/*for (int i = 0; i < 10; i++)
//	{
//		randomValue = rand();
//		printf("randomValue: %d, direction: %d\n", randomValue, randomValue % 4);
//	}*/
//}