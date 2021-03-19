#include <stdio.h>

int main(void) {
    char(*arr)[3];

    char tmp1[3] = { 'b', 'l', 'o' };
    char tmp2[3] = { 'c', 'k', '\0' };    //문자열의 끝을 알리는 '\0'을 추가
    char tmp3[5] = { 'd', 'm', 'a', 's', 'k' };    //배열의 사이즈가 다릅니다. 가리키기 불가.
    printf("tmp1[3]의 주소 : %p\n", tmp1);
    printf("tmp2[3]의 주소 : %p\n", tmp2);
    printf("tmp3[5]의 주소 : %p\n", tmp3);

    printf("\n"); printf("\n");

    arr = &tmp1;    //arr은 tmp1의 주소를 가리킵니다.
    printf("arr의 주소 : %p\t 문자열 : ", arr);
    for (int i = 0; i < (int)sizeof(*arr); i++)
    {
        printf("%c", (*arr)[i]);
    }
    printf("\n");

    arr = &tmp2;    //arr은 tmp2의 주소를 가리킵니다.
    printf("arr의 주소 : %p\t 문자열 : ", arr);
    for (int i = 0; i < (int)sizeof(*arr); i++)
    {
        printf("%c", (*arr)[i]);
    }
    printf("\n");

    //arr = &tmp3; 배열의 사이즈가 다르다는것은 타입이 다르다는 뜻 입니다.
    return 0;
}