// ���Ǻ� �������� Ư�� ������ ������ ���� �ڵ带 ������
#if WINVER >= 0x0501
	printf(������ XP ��롬n��);
#endif

// if DEBUG is defined
#ifdef DEBUG
	printf(��n = % d��, n);
#endif

// if NAME_SIZE is not defined
#ifndef NAME_SIZE
	#define NAME_SIZE 20
#endif