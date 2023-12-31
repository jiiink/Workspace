
#include <iostream>
#include <vector>
using namespace std ;
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "


/*
emplace : vector�� �ϳ��� �߰��Ѵ�. insert.
          insert�� �ٸ� ���� �׳� ������ �־ �ȴٴ� ���̴�.
          �� �ٸ� ������ ��Ƽ� ����°�� ���� �ʰ� ������
          ���� �˾Ƽ� vartiable type�� ����, ���Ŀ� ���߾
          �ִ´ٴ� ���̴�.  �׷��ϱ� ���� ���ϴ� ������.

          int itemp = 100 ;
          v.insert( v.begin(), itemp ) ;    */

int main () {

    vector<int> myvector = {10,20,30};

    auto it = myvector.emplace ( myvector.begin()+1, -23 );
    myvector.emplace ( it, 200 );
    myvector.emplace ( myvector.end(), 70 );
    allout("1. myvector[ ]:", myvector) ;

    myvector.insert( myvector.begin()+1, 99 ) ;
    allout("1. myvector[ ]:", myvector) ;


    return 0;
}
