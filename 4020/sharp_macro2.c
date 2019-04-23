#define MAX 256

#define TOSTR2(x) #x
#define TOSTR(x) TOSTR2(x)

#define LOG( desc )		\
	( __FILE__ "(" TOSTR(__LINE__) "): " desc )

int main(void)
{
	TOSTR(AAA);  // "AAA"
	TOSTR(MAX);  // "MAX"  ? "256"
	TOSTR(__LINE__); // "__LINE__" ? "9"


	#pragma message LOG("�� �κ��� ���� �ٽ� �����ؾ� �մϴ�.")
}
