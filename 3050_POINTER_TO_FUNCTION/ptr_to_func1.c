#include <stdio.h>

void foo(int a);

int main(void)
{
    int n = 0;
    int x[3] = { 1,2,3};

    printf("%p\n", &n); // n�� �ּ�
    printf("%d\n", n);  // n�� ��

    printf("%p\n", &x); // �迭�� �ּ�
    printf("%p\n", x);  // �ּ�. ��� �ּ�

    printf("%p\n", &foo); // �Լ� �ּ�.
    printf("%p\n", foo);  // �Լ� �ּ�.

    foo(10);

    int *p1 = &n;
    int (*p2)[3] = &x;
    void (*p3)(int) = &foo;
}


void foo(int a)
{
    printf("foo : %d\n", a);
}













//
