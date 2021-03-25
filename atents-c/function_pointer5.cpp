#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}

void calc(int (*fp)(int, int))
{
	printf("%d\n", fp(10, 20));
}
int main()
{
	calc(add);
	return 0;
}