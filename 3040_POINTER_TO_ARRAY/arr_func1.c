void f1( int n) {} // ok
//void f2( int a[3]) {}  // error

void f3( int (*a)[3]) // ok
{
    // a : �迭�� �ּ�
    // *a : �迭
    *a[0]; // 1��° ���.
}
void f4( int *a)
{
    *a; // 1��° ���
    a[0]; // ""
    a[1]; // 2��° ���..
}
int main(void)
{
    int n1 = 10;
    int n2 = n1;

    f1(n1);

    int x1[3] = {1,2,3};
    int x2[3] = x1; // error. �迭�� ���� �ɼ� ����.

    //f2(x1);
    f3(&x1); // �ּ� ����
    f4(x1); // �迭�̸� ����.
}
