#include <iostream>
#include <set>
#include <functional>
#include <stdlib.h>
using namespace std;
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "

struct custom_compare final { // �������� �ƴ϶� ���� ũ�� �������
    bool operator() (const string& left, const string& right) const {
        int nLeft  = atoi(left.c_str());
        int nRight = atoi(right.c_str());
        return nLeft < nRight;
    }
};

int main () {
    set<string> sut({"1", "2", "5", "23", "6", "290"});

    allout("\n default ����: ", sut) ;

    set<string, custom_compare> sut_custom({"1", "2", "5", "23", "6", "290"},
            custom_compare{}); //< Compare object optional as its default constructible.

    allout("\n ���� ���� ����: ", sut_custom ) ;

    auto compare_via_lambda = [](auto &&lhs, auto &&rhs) { return lhs > rhs; };
    using set_via_lambda = set<string, decltype(compare_via_lambda)>;
    set_via_lambda sut_reverse_via_lambda({"1", "2", "5", "23", "6", "290"},
                                          compare_via_lambda);

    allout("\n lambda_sort( ) ����: ", sut_reverse_via_lambda ) ;

    return 0;
}
