#include <stdio.h>

struct country {
	int lat; // 위도
	int log; // 경도
};

int getLatitude(struct country* country) {
	return country->lat;
}

double sub(double* m1, double* m2) {
	return m1 - m2;
}

// const 키워드를 통해 안정성 확보
int getNumber(const int o) {
	return o;
}

int main(){
	struct country korea = {37, 127};
	double x = 12.34;
	double y = 56.78;
	int xint, yint;

	// 1. 구조체는 포인터로 전달하면 메모리를 아낄 수 있다.
	// 포인터는 전부 4 byte
	printf("한국의 위도(N): %d\n", getLatitude(&korea)); \

	// 2. byte 이상의 데이터는 포인터로 전달
	printf("%.2f - %.2f = %.2f\n", y, x, sub(&y, &x));

	// 3. 실수 연산을 정수 연산으로 최대한 바꿈
	xint = x * 100;
	yint = y * 100;

	// 100 곱했으니 다시 100으로 나눔
	double xy = (xint * yint) / 100;
	
	printf("%lf", xy);

	return 0;
}