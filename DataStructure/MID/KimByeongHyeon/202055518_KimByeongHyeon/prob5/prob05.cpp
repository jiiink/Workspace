#include <iostream>
#include <list>
#include <string>
using namespace std ;

#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<" "
/*
�˻��� �� �ٸ� string
string mys = "atttgccgaatcggggattctgatttttaag";
string mys = "atgcaatgcaatgcaatgcaatgca";
string mys = "ttttttttaaaaaaaacccccccc";  --> ó�� ����� ������.
*/

// �������� ä���� �� �κ�
list<char> make_dna( list<char> L){
    L.push_back('$');
    return( L ) ;
}


int main() {
    string mys = "atttgcctgatttttacgaatcggggattag";
    list<char> DNA( mys.begin(), mys.end());
    list<char> Out ;

    allout(" DNA= ", DNA ) ;

    Out = make_dna( DNA ) ;
    allout(" Out= ", Out ) ;
    return 0;
}

