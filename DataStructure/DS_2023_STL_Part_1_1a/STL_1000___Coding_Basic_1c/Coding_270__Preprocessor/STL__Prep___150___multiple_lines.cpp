#include <iostream>
using namespace std;

#define X 30    //macro definition
const int Y = 10; //global integer constant

// �� �ٿ� �������� macro�� ����� �� �ֽ��ϴ�. �� ����� ����̱� ������

#define Heading(x) \
    do { \
        cout<<  "\n\n �λ���б� " ; \
        cout << "\n ������ǻ�� ���к� " ; \
        cout << "\n " << (x) << " ��° ������ �����մϴ�." ; \
    } while(0)

int main() {

	const  int Z = 30; //local ineteger constant
	int t = -9999 ;

    Heading(Z) ;
    Heading(t) ;

	return 0;
}
