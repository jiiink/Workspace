#include <iostream>
#include <set>
#define allout(MSG,X)   cout<<"\n "<<MSG<<"\n >> ";for(auto w:X)cout<<w<<", "
using namespace std ;

/*
std::multiset�� associative container�̸� �׻� ���ĵ� ������ ���� �մϴ�.
�׸��� search, insertion, and removal ������ Log �ð��� ó���մϴ�.
��������ε� �׷��ϰ�, �־��� ��쵵 �׷��ϰ�. ���� ������ RB-Tree��� �� �����ϰ�
�ణ ����� ������ ����մϴ�. ���� ...  operations have logarithmic complexity.

std::list�� �� ������ �״�� �����ϴ� �����̳��Դϴ�. ����ڰ� ������
������ �״�� �����մϴ�. ���� ������� ������ �ٲ��� �ʾƿ�.
�������� ���� �����ϰ�, �������� ���� ������ �� ���� �ڷᱸ�� �Դϴ�.
���� Ư�� it�� ���Ҹ� �����ϰ� �ִٸ� ����ð��� �ش� ���Ҹ� ����, �߰��� ��
�ֽ��ϴ�. �ֳİ�� ??? ������ ������ �ʿ䰡 �����ϲ���...
�׷��� list������ ã���۾��� �������. random access�� �ȵǴϱ�.

���� ã�⸦ �����ϰ� �ʹٸ� multiset�̳� set�� ����ϼ���.
�ƴϰ� insert delete�� ���� �Ѵٸ� �׳� list�� ����Ͻñ�,
�������� ���� ������ ���� �ʴ´ٰ� ������ �� ���Դϴ�. OK?
*/

int main () {
    multiset<int> mset;
    list    <int> mlist;


    return 0;
}
