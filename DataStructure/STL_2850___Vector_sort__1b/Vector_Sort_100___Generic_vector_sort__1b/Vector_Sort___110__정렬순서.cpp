
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
#define allout(MSG,X)   std::cout<<" "<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "

int main() {

     vector < vector<int>> vecall { {0}, { }, { 1,2,3,5 },{ 7,0,1 }, {2,2,2,2,2},\
                     {3, 4, 5}, {2}, { 1,2,3 }, { 7,9 }, {7,9,5}} ;



     sort( vecall.begin(),vecall.end()) ; // �� vector �������� ������.

     int i = 0;
     string imsg ;
     for(auto w  : vecall ) {
        imsg = "\n rank- "+ to_string(++i);
        allout( imsg, w ) ;
     }

     cout << "\n\n �Ųٷ� �����غ��� " ;
     sort( vecall.begin(),vecall.end(), greater< vector<int>>() ) ; // �� vector �������� ������.

     i = 0;
     for(auto w  : vecall ) {
        imsg = "\n rank- "+ to_string(++i);
        allout( imsg, w ) ;
     }

}
