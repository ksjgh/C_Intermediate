#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("%d\n", sizeof(wchar_t));
//    wchar_t s2[] = L"ABCD�����ٶ�";
//    printf("%d\n", sizeof(s2));
//    printf("%d\n", strlen((char*)s2));

    printf("%d\n", sizeof(L"ABCD�����ٶ�"));
}
