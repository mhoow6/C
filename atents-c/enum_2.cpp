#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// ���ڿ� �ǹ̸� �ο��� �� ���� ���
enum Direct {
	NORTH,
	EAST,
	WEST,
	SOUTH
};


// 0, 1, 5, 6
enum Remote {
	TURNON,
	TURNOFF,
	CHANNELUP = 5,
	CHANNELDOWN
};


int main() {
	srand(time(NULL));

	unsigned int direct = rand() % 4;

	switch (direct) {
	case NORTH:
		printf("North �̵�\n");
		break;
	case EAST:
		printf("East �̵�\n");
		break;
	case WEST:
		printf("West �̵�\n");
		break;
	case SOUTH:
		printf("South �̵�\n");
		break;
	}


	return 0;
}