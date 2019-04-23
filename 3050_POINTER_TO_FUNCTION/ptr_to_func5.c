#include <stdio.h>

int Add(int a, int b)
{
    printf("Add : %d, %d\n", a, b);
    return a + b;
}

// int Add(int a, int b); // �Լ�����
// int (*f)(int, int);    // �Լ� ������ ���� ����

typedef int FUNC(int, int); // FUNC :�Լ� Ÿ��
typedef int (*PFUNC)(int, int); //PFUNC: �Լ� ������ Ÿ��

//void foo( int (*f)(int, int)   )

void foo( FUNC* f  )
//void foo( PFUNC f  )
{
    f(1,2); // Add(1,2)
}

//int(*  goo() )(int, int)

FUNC*  goo()
//PFUNC goo()
{
    return Add;
}

int main(void)
{
    foo( &Add );
    goo()(1,2); // Add(1,2)
}










//
