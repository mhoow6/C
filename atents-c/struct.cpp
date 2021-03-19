#include <stdio.h>

struct point {
	int x;
	int y;
};

struct circle {
	struct point center;
	int r;
};

int main() {
	struct point p1;
	struct point p2 = {10, 10};
	struct point p3;
	struct circle c1 = {{20, 20}, 3};

	p1.x = 0;
	p1.y = 0;

	p3 = p1;

	printf("p1의 x 좌표: %d\np1의 y 좌표: %d\n", p1.x, p1.y);
	printf("c1의 중심: (%d, %d)\nc1의 반지름: %d\n", c1.center.x, c1.center.y, c1.r);
}