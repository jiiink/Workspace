#include <bits/stdc++.h>
#define allout(MSG,X)  cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main () {
   vector<int> myvector;

    for (int i=110; i<=120; i++) myvector.push_back(i);

    allout(" ����� ���� vector[]: ", myvector ) ;
    // ù 3���� �������ϴ�. ���� ������ �ݵ�� ��ġ�� ���� :

    myvector.erase (myvector.begin()+3);   // �ϳ��� ����
    allout(" 1. ����� �� �ڿ� vector[]: ", myvector ) ;
    myvector.erase (myvector.begin(),myvector.begin()+3);
    allout(" 2. �� ������ ����� �� �ڿ� vector[]: ", myvector ) ;
    myvector.push_back(87) ;
    allout(" 3. �߰� �� ���� vector[]: ", myvector ) ;

    return 0;
}
