#include <stdio.h>

/*******************************
* 피보나치 수열
* 1과 1로 시작
* 다음 피보나치 수는 바로 앞의 두 피보나치 수의 합이 되는 수열
* f(n) = f(n-1) + f(n-2)
*******************************/


int main() {
	int A = 1;
	int B = 1;
	int C = 0; // 다음 피보나치 수
	int N = 2; // 현재 수열 항의 개수
	int S = 0; // 총 합

	S = A + B;
	do {
		C = A + B;
		S = S + C;
		A = B;
		B = C;
		N = N + 1;
	} while (N < 100);

	/*********************
	* 디버깅표
	* ***** N = 2 *****
	* S = 2
	* C = 1 + 1 = 2
	* S = 2 + 2 = 4
	* A = 1;
	* B = 2;
	* N = 3; 
	* ***** N = 3 *****
	* C = 1 + 2 = 3;
	* S = 4 + 3 = 7;
	* A = 2;
	* B = 3;
	* N = 4;
	*********************/

	printf("sum of fibonacci = %d\n", S);

	return 0;
}