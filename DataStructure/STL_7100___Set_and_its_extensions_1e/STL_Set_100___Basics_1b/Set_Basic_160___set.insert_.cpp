/*
multiset, set�� associative container�̸� �׻� ���ĵ� ������ ���� �մϴ�.
�׸��� search, insertion, and removal ������ Log �ð��� ó���մϴ�.
��������ε� �׷��ϰ�, �־��� ��쵵 �׷��ϰ�. ���� ������ RB-Tree��� �� �����ϰ�
�ణ ����� ������ ����մϴ�. ���� ...  operations have logarithmic complexity.

list�� �� ������ �״�� �����ϴ� �����̳��Դϴ�. ����ڰ� ������
������ �״�� �����մϴ�. ���� ������� ������ �ٲ��� �ʾƿ�.
�������� ���� �����ϰ�, �������� ���� ������ �� ���� �ڷᱸ�� �Դϴ�.
���� Ư�� it�� ���Ҹ� �����ϰ� �ִٸ� ����ð��� �ش� ���Ҹ� ����, �߰��� ��
�ֽ��ϴ�. �ֳİ�� ??? ������ ������ �ʿ䰡 �����ϲ���...
�׷��� list������ ã���۾��� �������. random access�� �ȵǴϱ�.

���� ã�⸦ �����ϰ� �ʹٸ� multiset�̳� set�� ����ϼ���.
�ƴϰ� insert delete�� ���� �Ѵٸ� �׳� list�� ����Ͻñ�,
�������� ���� ������ ���� �ʴ´ٰ� ������ �� ���Դϴ�. OK?
*/
#define allout(MSG,X)   cout<<"\n"<<MSG<<": ";for(auto w:X)cout<<w<<", "
#include <iostream>
#include <set>
#include <string>
using namespace std;


int main () {
    set<int> myset;
    set<int>::iterator it;
    pair<set<int>::iterator,bool> ret;

    // set some initial values:
    for (int i=1; i<=5; ++i) myset.insert(i*10);    // set: 10 20 30 40 50
    allout("Set step1: ", myset ) ;

    ret = myset.insert(20);               // no new element inserted
    allout("Set step2: ", myset ) ;

    if (ret.second==false) it=ret.first;  // "it" now points to element 20

    myset.insert (it,35);                 // max efficiency inserting
    myset.insert (it,24);                 // max efficiency inserting
    myset.insert (it,16);                 // no max efficiency inserting
    allout("Set step3: ", myset ) ;

    int myints[]= {5,10,30};              // 10 already in set, not inserted
    myset.insert (myints,myints+3);
    allout("Set step3: ", myset ) ;

    return 0;
}

