// vector���� ������ �� �ִ� �پ��� ����(operator) �� sorting�� ������ ��

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

bool isin(vector<int> yourv, int value) {
    for (auto item : yourv) {
        if (item == value) {
            return true;
        }
    }
    return false;
}

// �������� �� �Լ��� �ϼ��ؾ� �մϴ�.
vector<int> Tomato( vector<int> myv ){
    vector<int> yourv ;
    vector<int> lotto;
    sort(myv.begin(), myv.end()); //sort my myv
    for (auto it=myv.begin(); it!=myv.end(); ++it) { // remove duplicate of sorted myv
        if (!isin(yourv, *it)) {
            yourv.push_back(*it);
        }
    }
    for (auto it=yourv.rbegin(); it!=yourv.rend(); ++it) { // reverse vector
        lotto.push_back(*it);
    }
    return ( lotto ) ;
}




int main() {

    vector<int> Box { 1, 2, 3, 1, 2, 3, 5, 6, 5, 6, 10 } ;
//  vector<int> Box { 9, 8, 11, 2, 3, 5, 45, 21, 32, 11, 45, 45, 8, 13 } ;
//  vector<int> Box { 7,7,7,7,7,7,7,7 } ;

    allout(" �۾� �� Box[]", Box ) ;

    auto Apple = Tomato( Box ) ;

    allout(" �۾� �� Apple[]", Apple ) ;


} // end of main ( )
