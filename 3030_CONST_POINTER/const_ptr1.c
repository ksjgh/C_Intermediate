#include <stdio.h>

int main(void)
{
    int n = 10;

    // *�� �������� const �� ��ġ�� ����
    const int *p1 = &n; // ����� ����Ű�� ������
    int *const p2 = &n; // p2�� const
                        // p2�� ���󰡸� int
                        // ��� ������..
    int const *p3 = &n; // p1�� ����

    int n2 = 10;
    p1 = &n2; // ok
    *p1 = 20; // error
    p2 = &n2; // error
    *p2 = 20; // ok



    // c1, c2 �� ������ �����մϴ�.
    const int c1 = 10;
    int const c2 = 10;
}

















//
