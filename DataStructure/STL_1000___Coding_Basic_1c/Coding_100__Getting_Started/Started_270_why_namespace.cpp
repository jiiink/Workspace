#include <iostream>
#include <bits/stdc++.h>

namespace PNU {  //  �˰��� �ѹ��� �θ� �� ���
    int val = -100 ;
    std::string my = "Good Boy!" ; // string�� �⺻������ �ƴ϶� std �ֹ� �����̴�.

    int get_val(){
        return (val*99) ;
    }
}

using namespace std;

int main() {
    int val = 5;

    cout << "PNU::val= "  << PNU::val << "\n" ;
    cout << "PNU::my= " << PNU::my <<"\n" ;
    cout << "PNU::get_val()= "  << PNU::get_val() << "\n"  ;

}


