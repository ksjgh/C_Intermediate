#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // �Ҵ�� �޸𸮸� char[160]���� ����ϰ� �ʹ�.
    char* p1 = (char*)malloc(160);

    // �Ҵ�� �޸𸮸� int[40]���� ����ϰ� �ʹ�.
    int *p2 = (int*)malloc(160);

    // �Ҵ�� �޸𸮸� int[10][4]���� ����ϰ� �ʹ�.
    // 2�����迭 �̸� => 1���迭�� ����Ű�� ������ �ǹ�
    int (*p3)[4] = ( int (*)[4]   ) malloc(160);
    // p3[10][4]
    p3[0][1] = 10;

    // int[4][5][2]
    //
    int(*p4)[5][2] = ( int(*)[5][2]   ) malloc(160);
    p4[0][0][0] = 10;

    free(p1);
    free(p2);
    free(p3);
    free(p4);

}






//
