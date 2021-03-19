#include <stdio.h>

void main() {
	int a = 20;
	int b = 30;

	printf("%d < %d = %d\n", a, b, a<b); // ³í¸®°ª(true, false)
	printf("%d <= %d = %d\n", a, b, a<=b);
	printf("%d > %d = %d\n", a, b, a>b);
	printf("%d >= %d = %d\n", a, b, a>=b);
	printf("%d == %d = %d\n", a, b, a==b);
	printf("%d != %d = %d\n", a, b, a!=b);
}