// ���� ����

#define VAR(TYPE, NAME)  TYPE NAME##__LINE__

int main(void)
{
    // unique �� �̸��� ����ϴ� ������ �����ϴ� ��ũ��
    VAR(int, n); // int n6
    VAR(int, n); // int n7

}
