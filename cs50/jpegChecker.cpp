#include <stdio.h>

// ./jpegChecker [파일.파일포맷]
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        // 프로그램 실행시 명령 인자가 2개가 아니면 종료
        return 1;
    }

    // 읽기모드로 연 파일의 포인터
    FILE *file = fopen(argv[1], "r");

    if (file == NULL)
    {
        return 1;
    }
 
    // 파일의 앞의 byte 3개를 가져오기 위한 버퍼
    unsigned char bytes[3];

    // bytes버퍼에 3의크기를가진원소를 하나받는다 file스트림에서
    fread(bytes, 3, 1, file);

    // jpeg 바이너리 파일의 매직 넘버(규칙)
    // 0xff 0xd8 0xff 이면 jpeg파일
    if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
    {
        printf("Maybe\n");
    }
    else
    {
        printf("No\n");
    }
    fclose(file);
}