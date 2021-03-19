#include <stdio.h>

struct point {
	int x;
	int y;
};

struct circle {
	struct point center;
	int r;
};

struct point p1 = { 10, 10 };
struct point* pp1 = &p1;

int main() {
	printf("p1ÀÇ x ÁÂÇ¥: %d\np1ÀÇ y ÁÂÇ¥: %d\n", pp1 -> x, pp1->y);
}