// 조건부 컴파일은 특정 조건이 만족할 때만 코드를 컴파일
#if WINVER >= 0x0501
	printf(“윈도 XP 사용＼n”);
#endif

// if DEBUG is defined
#ifdef DEBUG
	printf(“n = % d”, n);
#endif

// if NAME_SIZE is not defined
#ifndef NAME_SIZE
	#define NAME_SIZE 20
#endif