// argc, argv�� ����ϴ� ���
// console���� �Ű������� ����.
// >a.exe  t.txt  67 89
// argc�� ��ɾ ���õ� token�� ����
// argv[i]�� i��° token
// ����� > argu.exe this that good (enter)

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    cout << "\n �ڷᱸ�� ������ \n"  ;
    cout << "\n argc=" << argc << endl ;
    cout << "\n argv[0]=" << argv[0] ;
    cout << "\n argv[1]=" << argv[1] ;
    cout << "\n argv[2]=" << argv[2] ;
    // system("PAUSE");
    return EXIT_SUCCESS;
}
