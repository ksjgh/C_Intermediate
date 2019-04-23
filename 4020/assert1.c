#include <stdio.h>
#include <assert.h>

#define assert( expr )  \
    if ( !(expr) )  {    \
        printf("[] Assertion failed: %s, file %s, line %d\n", \
            #expr, __FILE__, __LINE__); \
        abort(); }


void foo( int age)
{
    // ������ ��ȿ���� Ȯ���Ѵ�.
    assert( age > 0);

    // "�Լ������� age�� ���� �̹Ƿ� 0 ���ٴ� Ŭ���̴�"
    // ��� �����ϰ� �ڵ� �ۼ�
    //.....
}
int main(void)
{
    foo(-10);
}
