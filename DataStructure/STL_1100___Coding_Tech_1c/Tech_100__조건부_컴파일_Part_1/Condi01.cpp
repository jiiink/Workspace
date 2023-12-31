/*
	���Ǻ� ������ (Conditional Compile)
	���Ǻ� �������� ���Ǻ� ������ �����ڿ� ���� �ڵ��� �����κ��� ������ �� ������ �ƴ����� �����Ѵ�.
	�� ������ ��� �����ڰ� XX�� ���, YY�� ���, �� �̿��� ��쿡 ���� ������ �ϴ� �κ��� �޶�����.
	���Ǻ� ������ �����ڸ� �Է��ϱ� ���� ����� ������ ����.

		Visual Studio : ������Ʈ �Ӽ� -> C/C++ -> ��ó���� -> ��ó���� ���ǿ� ������ �߰� (ex. XX �߰�)

		Dev C++ : ���� -> �����Ϸ� ���� -> �����Ϸ� �߰� ��ɿ� üũ, -D ������ �߰� (ex. -D XX �߰�)

		GCC(������)	: G++ -D ������ ����.cpp (ex. G++ -D XX test.cpp)

		CodeBlock : [Project]-[Build Options...]-[Debug]-[#defines] �� ������ �߰� (ex. -D XX �߰�)
	�ϳ��� �ҽ��� ������ �°� ������ �ϴ� �뵵�� Ȱ��ȴ�.
*/

// Setting >> Compiler >> #define ���� ����
// DEBUG=1�� �߰��Ѵ�. �߰��� #define�� ���� �ٿ� �߰� ��.
// �ݵ�� MACRO=""�� �߰��ؾ� �Ѵ�. =�� ������ �ȵ�.
// ���� compile option�� ���� ��� ��ü�� rebuild�ؾ� �Ѵ�.

// �ϴ� ����� Project���� ����Ŭ���� �ؼ� Clean�� �ϸ�
// ���õ� ��� �ΰ� ������ �����Ѵ�.

#include <stdio.h>

#ifdef UNIX
void func() {
	printf("UNIX !!\n");
}
#elif IOS
void func() {
	printf("IOI !!\n");
}
#else
void func() {
	printf(" Windows!!\n");
}
#endif

int main(void) {
	func();
	return 0;
}
