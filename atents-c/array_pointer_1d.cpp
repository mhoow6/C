#include <stdio.h>

int main(void) {
    char(*arr)[3];

    char tmp1[3] = { 'b', 'l', 'o' };
    char tmp2[3] = { 'c', 'k', '\0' };    //���ڿ��� ���� �˸��� '\0'�� �߰�
    char tmp3[5] = { 'd', 'm', 'a', 's', 'k' };    //�迭�� ����� �ٸ��ϴ�. ����Ű�� �Ұ�.
    printf("tmp1[3]�� �ּ� : %p\n", tmp1);
    printf("tmp2[3]�� �ּ� : %p\n", tmp2);
    printf("tmp3[5]�� �ּ� : %p\n", tmp3);

    printf("\n"); printf("\n");

    arr = &tmp1;    //arr�� tmp1�� �ּҸ� ����ŵ�ϴ�.
    printf("arr�� �ּ� : %p\t ���ڿ� : ", arr);
    for (int i = 0; i < (int)sizeof(*arr); i++)
    {
        printf("%c", (*arr)[i]);
    }
    printf("\n");

    arr = &tmp2;    //arr�� tmp2�� �ּҸ� ����ŵ�ϴ�.
    printf("arr�� �ּ� : %p\t ���ڿ� : ", arr);
    for (int i = 0; i < (int)sizeof(*arr); i++)
    {
        printf("%c", (*arr)[i]);
    }
    printf("\n");

    //arr = &tmp3; �迭�� ����� �ٸ��ٴ°��� Ÿ���� �ٸ��ٴ� �� �Դϴ�.
    return 0;
}