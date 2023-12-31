#include <bits/stdc++.h>
using namespace std;


struct S {
    int n;    // S�� ���� data 1
    string s; // S�� ���� data 2
    float d;  // S�� ���� data 3
    bool operator<(const S& rhs) const {  // ���� �� ���� rhs: right hand side
           return tie(n, s, d) < tie(rhs.n, rhs.s, rhs.d);
    }
};

int main() {
    set<S> set_of_s; // S is LessThanComparable

    S value {42, "Test", 3.14};   // set�� �� ���� value�� �ʱ�ȭ
    set<S>::iterator iter;        // ���� S�� iterator, Red-Black Tree�� pointer
    bool inserted;

    // unpacks the return value of insert into iter and inserted
    tie(iter, inserted) = set_of_s.insert( {78, "Doggy",   89.045});
    tie(iter, inserted) = set_of_s.insert( {53, "Katz",     0.123});
    cout << "\n" << (*iter).s << " " << (*iter).d ;
    tie(iter, inserted) = set_of_s.insert( {34, "Collins", 12.65});
    tie(iter, inserted) = set_of_s.insert( {27, "Katz",    -7.78});
    tie(iter, inserted) = set_of_s.insert(value);

    if (inserted)
        cout << "\n> Value�� ���������� �ԷµǾ����ϴ�. \n";

    for(auto w : set_of_s){
        cout << "\n" << w.s << " " << w.d ;
    }
}
