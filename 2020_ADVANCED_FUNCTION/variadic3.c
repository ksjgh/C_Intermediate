#include <stdio.h>
#include <stdarg.h>

void foo(int n, ... )
{
    //int *p = &n + 1;
    va_list args;       // char *args;
    va_start( args, n); // args = &n + 1

    for ( int i = 0; i < n; i++)
    {
        int a = va_arg(args, int);
                    // 1. args �� ����Ű�°����� int ������
                    // 2. args �� int ũ�� ��ŭ �̵�
        printf("%d\n", a);
        //p = p + 1;
    }
    va_end(args);  // args = 0
}

int main(void)
{
    foo(7, 10, 20, 30, 40, 50, 60, 70); // push 50
                                        // push 40
}
