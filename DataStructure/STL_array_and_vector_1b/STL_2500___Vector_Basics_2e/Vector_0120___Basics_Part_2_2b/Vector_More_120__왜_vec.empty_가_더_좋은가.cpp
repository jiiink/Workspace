#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {
    vector<int> myvector{ 1, 2, 3, 4, 5 };
    cout << "\n myvector.size() = "  << myvector.size();
    cout << "\n myvector.empty()= "  << myvector.empty();
    return 0;
}

/*
�� empty()�� size()���� �����Ѱ� ?

empty()�� �������� type�� ������� �� ������ ������� �ʴ´�.
�׷��� size( )�� ��� ���� ���Ҹ� ������ ������ ���� �ϴ� ��찡
�ִ�. ���� ��� list.size( )�� ����̴�.
�� ��쿡�� O(n) time�� �ɸ���.

*/
