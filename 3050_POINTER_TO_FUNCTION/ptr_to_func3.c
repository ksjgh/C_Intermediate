#include <stdio.h>

int Add(int a, int b)
{
    printf("Add : %d, %d\n", a, b);
    return a + b;
}

void foo( int (*f)(int, int)   )
{
    f(1,2); // Add(1,2)
}

// 1. �Լ� ������ Ÿ���� ������
// 2. ���� �ڸ��� ""�Լ��̸�()"
//int(*f)(int, int); // &Add �� �ּҸ� ��� �Լ� ������

int(*  goo() )(int, int)
{
    //return &Add;
    return Add;
}

int main(void)
{
    //foo( &Add );
    // foo( Add );
    goo()(1,2); // Add(1,2)
}










//
