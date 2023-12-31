// stack�� iterator�� ����. container�� �ƴϱ� �����̴�.
// ��а����� stack�� ��� ������ �о ����غ��� ������
// �̰��� �Ұ��� �ϴ�. �ֳ��ϸ� stack�� push( ), pop( ), top( )�� �����ϱ�
// �����̴�.

#include <bits/stdc++.h>
using namespace std;


// returns an iterable copy of the given queue, stack or adaptors
template<class T> std::list<T> Save_to_List(std::stack<T> Mstack ) {
    std::list<T> returnList;
    while (!Mstack.empty()) {
        returnList.push_back( Mstack.top() );
        Mstack.pop();
    }
    return returnList;
}


int main() {

    stack <int> S;

    for (int i = 0;i < 10; ++i) S.push(i);

    cout << "\n ���� S contains: ";
    for (auto i : Save_to_List(S))
        cout << i << ", ";

    return 0;
}
