
#include <iostream>
#include <vector>
#include <map>
using namespace std ;

void vecout( string MSG, vector<int> X){
    cout<<"\n "<< MSG << "\n" ;
    for(auto w : X) cout<<w<<" ," ;
    cout<< "\n" ;
}

int main() {

    vector<int> v = {1, 3, 5, 7, 9};
    int w ;

    for (auto x : v) { x +=10 ; }
    vecout("local auto�� ���� ��", v) ;

    for (w : v) { w +=10 ; }
    vecout("�׳� ���� ��", v) ;

} // end of main( )



