// No.2 Wording Vector Ȱ���ϱ�  STL


#include <bits/stdc++.h>       // Try Catch�� ����ϱ� ���ؼ� �־�� �ϴ� ���
using namespace std;

template < typename C >
void dump( const char *desc, C c) {
	cout.width(12);
	cout << left << desc << "==> ";
	copy(c.begin(),c.end(),ostream_iterator <typename C::value_type>(cout," "));
	cout << endl;
} // dump( ) template

vector<string> vecline;
vector<string> tmpvec ;
vector<string> vecarray(10) ;
vector<string>::iterator strit, vecit ;
vector< vector<string> > vecvec ; //  vector of vector : ���ߺ����� ������
vector< vector<string> >::iterator vecvecit ;
string mystr ;

int main(){

    cout << "����ִ� vector�� ����մϴ�." ;
    dump("vecline",     vecline  ) ;
    dump("vecarray",    vecarray ) ;

    cout << "\n �ϳ��� ���� vecline[]�� �ڷ� ���Ҹ� �־� ���ϴ�. " ;
    vecline.push_back(  "Jan"  ) ;
    vecline.push_back(  "Feb"  ) ;
    vecline.push_back(  "March") ;
    dump("\n 3�� �Է��� vecline[] = ",  vecline ) ;

    vecvec.push_back( vecline );
    vecline.push_back(  "��") ;
    vecline.push_back(  "��") ;
    vecline.push_back(  "��") ;
    dump("\n �������� ���� �� vecline", vecline ) ;

    vecvec.push_back( vecline );     vecline.clear( ) ;
    vecvec.push_back( vecline );
    vecvec.push_back( vecline );

    vecline.push_back("Drink-and-Drink!") ;
    vecvec.push_back( vecline );  // vcline.resize( 0 ) ;
    dump("vecline", vecline ) ;

    dump("vecvec[0]", vecvec[0]) ;
    dump("vecvec[1]", vecvec[1]) ;
    dump("vecvec[2]", vecvec[2]) ;
    dump("vecvec[3]", vecvec[3]) ;
    dump("vecvec[4]", vecvec[4]) ;

    cout << "\n vecvec[1][2]=" << vecvec[1][3] ;
    cout << "\n vecvec[4][2]=" << vecvec[4][0] ;

    // ù��° vecvec�� ù ���� vector�� ���� ������ ���� ����ϱ�
    vecvecit = vecvec.begin() ;
    tmpvec = (*vecvecit) ;
    cout << "\n ������ ���� ǥ�� 1 = " << *(tmpvec.end()-1)  ;
    cout << "\n ������ ���� ǥ�� 2 = " << *((*vecvecit).end()-1)  ;
}//End of Main
