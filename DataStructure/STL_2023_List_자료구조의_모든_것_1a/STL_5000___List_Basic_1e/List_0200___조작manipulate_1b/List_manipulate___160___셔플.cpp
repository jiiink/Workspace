#include <bits/stdc++.h>
using namespace std;
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "

int main() {

    vector<int> myVector(12) ;

    iota( myVector.begin(), myVector.end(), 100 ) ;

    // �õ带 �̿��Ͽ� ���� ���� ����
    int seed_value = 2023; // �õ� �� ���� (���ϴ� ������ ���� ����)
    seed_seq seedSequence{seed_value};
    default_random_engine engine(seedSequence);

    allout("���� ����[]= ", myVector ) ;

    shuffle(myVector.begin(), myVector.end(), engine);

    allout("���� ����[]= ", myVector ) ;

    return 0;
}
