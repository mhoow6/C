#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 숫자에 의미를 부여할 때 많이 사용
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
		printf("North 이동\n");
		break;
	case EAST:
		printf("East 이동\n");
		break;
	case WEST:
		printf("West 이동\n");
		break;
	case SOUTH:
		printf("South 이동\n");
		break;
	}


	return 0;
}