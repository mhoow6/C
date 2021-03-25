#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}

int main()
{
	int (*fp)(int, int);
	fp = add;
	printf("%d\n", fp(10, 20));
	fp = sub;
	printf("%d\n", fp(10, 20));
	return 0;
}