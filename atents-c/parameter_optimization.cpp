#include <stdio.h>

struct country {
	int lat; // ����
	int log; // �浵
};

int getLatitude(struct country* country) {
	return country->lat;
}

double sub(double* m1, double* m2) {
	return m1 - m2;
}

// const Ű���带 ���� ������ Ȯ��
int getNumber(const int o) {
	return o;
}

int main(){
	struct country korea = {37, 127};
	double x = 12.34;
	double y = 56.78;
	int xint, yint;

	// 1. ����ü�� �����ͷ� �����ϸ� �޸𸮸� �Ƴ� �� �ִ�.
	// �����ʹ� ���� 4 byte
	printf("�ѱ��� ����(N): %d\n", getLatitude(&korea)); \

	// 2. byte �̻��� �����ʹ� �����ͷ� ����
	printf("%.2f - %.2f = %.2f\n", y, x, sub(&y, &x));

	// 3. �Ǽ� ������ ���� �������� �ִ��� �ٲ�
	xint = x * 100;
	yint = y * 100;

	// 100 �������� �ٽ� 100���� ����
	double xy = (xint * yint) / 100;
	
	printf("%lf", xy);

	return 0;
}