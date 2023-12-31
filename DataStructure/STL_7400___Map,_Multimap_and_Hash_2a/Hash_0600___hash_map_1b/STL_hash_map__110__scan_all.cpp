// STL map�� ����� Binary Search Tree�� red-black tree�� �����. ��¥...
// ��¥�� �ٷ� <hash_map>

// Hashing Examples ������ �ؽ� �Լ��� ��
#include <iostream>
#include <vector>
#include <algorithm>
#include <hash_map>
#include <string>

using namespace std;
using namespace __gnu_cxx;

int main() {

    hash_map <int, string> m;
    hash_map <int, string>::iterator it;

    m[71]="Gregorio" ;
    m[ 3]="Samada" ;
    m.insert( hash_map <int, string>::value_type(75, "Hello") );
    m.insert( hash_map <int, string>::value_type(32, "World") );
    m.insert( hash_map <int, string>::value_type(40, "Korea") );

    cout << "\n hash_map: begin(), end()" << endl ;
    for(it=m.begin(); it!=m.end(); it++)
        cout << "m[" << it->first << " ]= " << it->second << endl;





}  // end of main()
