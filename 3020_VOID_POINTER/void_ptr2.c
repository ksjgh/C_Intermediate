int main(void)
{
    int n = 10;

    //char* p1 = &n; // C ���, C++ ����
    char* p1 = (char*)&n; // ok

    void* p2 = &n; // ok.

    //*p1;

    *p2;  // error
    p2 = p2 + 1; // error
    p2[0]; // *(p2+0) // error

    if ( p1 == p2 ) {}

    // �ٸ�Ÿ��* = void*
    int  *p3 = (int*)p2; // C : ok.  C++: ����.
    char *p4 = (char*)p2;


}

























//
