#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stdexcept>
#include <cstdio>
using namespace std;
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "


int main() {

    vector<int> v(10) ;
    v[0]=-1; v[5]=5; v[6]=6;
    cout << "\n v�� ó�� ũ��: " << v.size();


    allout("v[]�� ���� ����" , v) ;

    v.resize(5); // ũ�⸦ �ٿ����ô�.
    allout(" resize(5) ������ v[] : ", v) ;

    v.shrink_to_fit();
    allout(" v.shrink_to_fit() ������ v[] : ", v) ;


    return 0;
}
