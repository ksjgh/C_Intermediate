int n;
double d;
int ar[2];
int(*p)[2];

typedef int INT;
typedef double DOUBLE;
typedef int AR[2];  // �迭 Ÿ��
typedef int(*PAR)[2]; // �迭�� ����Ű�� ������ Ÿ��

int main(void)
{
    //AR x = {1,2}; // int x[2] = {1,2}

    int x[3][2] = {1,2,3,4,5,6,7};

    int(*p)[2] = x;
    AR* p2 = x;
    PAR p3 = x;
}








//
