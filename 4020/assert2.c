#include <stdio.h>
#include <assert.h>

/*
#define static_assert(expr) \
    char __static_assert_failed[(expr) ? 1 : -1];

static_assert( sizeof(int*) == 8 );
*/
// C++ : static_assert()
_Static_assert( sizeof(int*) == 8, "not 64bit compiler" );

void foo( int age)
{
    // ����ð� ������ ��ȿ���� Ȯ���Ѵ�.
    assert( age > 0);
}
int main(void)
{

    foo(-10);
}
