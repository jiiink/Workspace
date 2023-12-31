// string.find( ) �Լ��� generic find( )�� ���غ���.
/*
 npos is a static member constant value with the greatest possible
 value for an element of type size_t.
 This value, when used as the value for a len (or sublen)
 parameter in string's member functions, means "until the end of the string".

 As a return value, it is usually used to indicate no matches.
 This constant is defined with a value of -1, which because size_t
 is an unsigned integral type, it is the largest possible representable value for this type.
 */

#include <iostream>       //cout
#include <string>         //string
#include <vector>

using namespace std ;

int main () {
    string str  ("There are two needles in this haystack with needles.");
    string kstr ("�ƹ��� ���� ���ϰ� ���α׷��� �� �ִ� ���� �ƴϴ�.");
    string str2 ("needle");


    size_t found = str.find(str2);
    if (found != string::npos)   // npos�� no string matching
        cout << "\n ù��° 'needle' �ܾ� �߰� ��ġ : " << found ;

    found = str.find("needles are small",found+1,6);  // Ž������ ����
    if (found != string::npos)
        cout << "\n �ι�° 'needle' �ܾ� �߰� ��ġ : " << found ;

    found = str.find("Hehehe");
    if (found != string::npos)
          cout << "\n 'Hehehe' �ܾ �߰� : " << found ;
    else  cout << "\n 'Hehehe' �ܾ ���� : "  ;


    // ��Ʈ���� ��ü�غ���.
    str.replace(str.find(str2),str2.length(),"preposition");
    cout << "\n "<< str << '\n';

    vector <string> kchar = {"��", "��", "��", "��", "��"} ;


    for( auto w : kchar )
		 found = kstr.find(w);
         if (found != string::npos)   // npos�� no string matching
			cout << "\n " << w << "  at " << found ;
         else cout << "\n " << w << "�� �����ϴ�. " << found ;
    return 0;
}
