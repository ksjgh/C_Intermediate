#include <stdio.h>

int main(void)
{
    char s1[] = "hello"; // ���ڿ� �迭
    //char  *s2 = "hello"; // ���ڿ� ������

    const char  * s2 = "hello"; // ���ڿ� ������
//    s2 = "world";
    *s1 = 'A'; // ok
    *s2 = 'A'; // ����޸��� ��쵵 �ִ�.

    printf("%s\n", s1);
    printf("%s\n", s2);
}
