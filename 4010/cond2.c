#include <stdio.h>

#define VERSION  1000
#define DEBUG
#undef DEBUG

int main(void)
{
    // ��ũ�� �ɺ� ���� ���� ����
#ifdef DEBUG
    // ...
#else
    // ...
#endif

#ifndef DEBUG
    // ...
#endif

    // �ɺ� �� ����
#if   VERSION < 1000
    printf("1000 ���� ���� ���\n");
#elif VERSION == 1000
    printf("1000\n");
#else
    printf("1000 ���� ū���\n");
#endif

#if 0
    printf("�̺κ���\n");
    printf("�ּ�ó���ϰ� ������\n");
#endif

}







//
