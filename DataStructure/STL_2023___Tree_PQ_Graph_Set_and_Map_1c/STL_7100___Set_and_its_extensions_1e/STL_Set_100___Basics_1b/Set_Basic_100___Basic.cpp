/*
std::multiset, set�� associative container�̸� �׻� ���ĵ� ������ ���� �մϴ�.
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

#include <iostream>
#include <set>
#include <string>
using namespace std;

#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "


int main() {

    int a[] = {7, 4, 9, 9, 3, 4, 8, 2, 7, 5, 3, 6, 2, 4};
    set<int> s {67, 11, 62, 33, 44, 5, 16, -56, 87 } ; //(a, a+14);
    set<char> cs { 'a', 'b', 'x', 'm', 't'} ;

    cout << "\n set s�� ũ��� =  " << s.size() << ".";
    allout( "array a[] = ", a) ;
    allout( "set s{} = ", s) ;
    allout( "set cs{} = ", cs) ;


}
