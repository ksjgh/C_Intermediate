#include <stdio.h>
#include <stdlib.h>

void foo(void)
{
    printf("���α׷��� ����ð� ���\n");
}

int main(void)
{
    //atexit(&foo);
    atexit(foo);

    printf("hello\n");

    if ( 1 )
        return 0;

    printf("world\n");

    // ���α׷��� ����Ǳ� ����
    // foo �Լ��� �ݵ�� ȣ���ϰ� �ʹ�.
    //foo();
}
