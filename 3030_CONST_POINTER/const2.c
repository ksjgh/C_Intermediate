#include <stdio.h>

int main(void)
{
    int n = 10;

    int  *p1 = &n; // ok

    //char *p2 = &n; // C :���, C++ : ����
    char *p2 = (char*)&n; // ok..

    const int *p3 = &n; //  ok..
    n = 30; // ok
    *p3 = 30; // error.

}
