#include <stdio.h>

#define DEBUG

int main(void)
{
    int value = 10;

#ifdef DEBUG
    printf("%d\n", value ); // ������� ����.
#endif
}
