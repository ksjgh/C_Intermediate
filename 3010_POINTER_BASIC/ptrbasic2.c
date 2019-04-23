#include <stdio.h>

int main(void)
{
    int  n = 0;
    char c = 0;

    printf("%d\n", sizeof(n)); // 4
    printf("%d\n", sizeof(c)); // 1

    int  *pn = &n;
    char *pc = &c;

    // int*, char* �� ũ��� �����ϴ�.
    printf("%d\n", sizeof(pn)); // 32bit, 4
    printf("%d\n", sizeof(pc)); // 32bit, 4

    //
    printf("%p, %p\n", pn, pn + 1); // 1000, 1004
    printf("%p, %p\n", pc, pc + 1); // 2000, 1001

    //
    int *pn2 = pn + 1; // pn : 1000, pn2 : 1004

    // ������ - ������ = ����
    printf("%d\n", pn2 - pn); // 1

    printf("%d\n", pn2 + pn); // 1000 + 1004.. error



/*
    pn + 1; // ������ + ����   // ok..
    pn - 1; // ������ - ����   // ok
    pn * 1; // ������ * ����   // error
    pn / 1; // ������ / ����   // error

    pn + pn2; // ������ + ������  // error
    pn - pn2; // ������ - ������  // ok
    pn * pn2; // ������ * ������  // error
    pn / pn2; // ������ / ������  // error
*/
}


















//
