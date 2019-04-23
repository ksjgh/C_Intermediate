#include <stdio.h>

int Add(int a, int b)
{
    return a + b;
}

int main(void)
{
    Add(1,2);  // �Լ� ȣ��

    int (*f)(int, int) = &Add;

    // �Լ�ȣ���ϱ�
    // f  : �Լ��� ����Ű�� ������
    // *f : �Լ�
    (*f)(1,2); // Add(1,2) ����
    // *f(1,2); // error

    f(1,2); // ���� Add(1,2)�� �ǹ�
    (&Add)(1,2); // ok. Add(1,2)
}






//
