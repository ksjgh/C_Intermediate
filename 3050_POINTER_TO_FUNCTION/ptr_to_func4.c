#include <stdio.h>


// int(int, int) : �Լ� Ÿ��
int Add(int a, int b)
{
     return a + b;
}

int main(void)
{
    int x[3] = { 1,2,3}; // int[3] : �迭 Ÿ��
    int (*p1)[3]  = &x;  // int (*)[3] : �迭�� ����Ű��
                        //              ������ Ÿ��

    int (*p2)(int, int) = &Add;
                        // int (*)(int, int)
}






 //
