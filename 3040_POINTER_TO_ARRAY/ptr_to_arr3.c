#include <stdio.h>

int main(void)
{
    int n = 10;

    printf("%p\n", &n); // �ּ�
    printf("%d\n", n);  // ��, 10

    int x[3] = { 10, 20, 30 };

    printf("%p\n", &x); // �迭�� �ּ�
    printf("%p\n", x);  // ��, 10,20,30 �� �ƴϰ�
                        // �ּ�.

    int (*p1)[3] = &x; // �迭�� �ּ�
    int *p2 = x;       // �迭�� �ּҰ� �ƴ� 10�� �ּ�
}


















//
