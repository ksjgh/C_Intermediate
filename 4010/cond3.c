#include <stdio.h>

//#define DEBUG
//#define VERSION 1000

int main(void)
{
#ifdef DEBUG
    printf("����� �޼���\n");
#endif

#if  VERSION == 1000
    printf("VERSION : 1000\n");
#endif
}
