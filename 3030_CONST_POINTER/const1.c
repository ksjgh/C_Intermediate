#include <stdio.h>

int main(void)
{
    int n1 = 10;
    n1 = 20;     // ok..

    const int c1 = 10;
    //c1 = 20;    // error

    const int c2 = 10;
    int const c3 = 10;

    const int c4;       // �ʱⰪ�� ����.
    printf("%d\n", c4);
}
