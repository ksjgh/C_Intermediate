#include <stdio.h>

#define MAX 256         // ��ũ�� ���
#define SQUARE(n) ((n) * (n)) // ��ũ�� �Լ�

int square(int n) { return n * n;}

int main(void)
{
    char name[MAX];

    int a = 3;
    int n1 = square(++a); // 16
    int n2 = SQUARE(++a); // ((++a)*(++a)) => ((a) * (a))
                            // => 25

    printf("%d, %d\n", n1, n2);
}













//
