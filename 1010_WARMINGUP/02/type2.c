/*
int n;  // n �� ����
int *p; // p �� ������ ����
int x[3];  // x �迭 ����
void foo(int); // foo �Լ�

// typedef : ���� �ڸ��� �ɺ��� ������ �ƴ� Ÿ���� �ȴ�.
typedef int n;  // n �� Ÿ��
typedef int *p; // p �� ������ Ÿ��
typedef int x[3];  // x �迭 Ÿ��
typedef void foo(int); // foo �Լ� Ÿ��
foo goo; // void goo(int); // goo �Լ� ����.

n a = 10; // int a = 10
x r = {1,2,3}; // int r[3] = {1,2,3}
*/
typedef int DWORD;
typedef int AR[2];
typedef int AR2[2][3];

int main(void)
{
    DWORD n = 0; // int n = 0

    AR x = {1,2}; // int x[2] = { 1,2}

    AR2 y = {0}; // int y[2][3] = {0};

    AR* p = &x;
}













//
