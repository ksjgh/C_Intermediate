#include <stdio.h>

int main(void)
{
    int    n = 10;
    double d = 3.4;
    int x[3] = {1,2,3};

    // ���� n, d, x �� �ּҸ� ���
    // ������ ���� p1, p2, p3�� ���弼��
    int    *p1 = &n;
    double *p2 = &d;
    //int *p3[3] = &x; // �켱���� ����� �迭�� ó��
    int (*p3)[3] = &x; 
}


















//
