#include <bits/stdc++.h>
#define allout(msg,lx)  cout<<"\n"<<msg<<" : ";for(auto w : lx ) cout<< w << " , " ;
#define deepout(msg,deepl)  cout<<"\n"<<msg<<" : \n";\
                            for(auto w : deepl ){cout<<"\n";for(auto q:w) cout<< " " << q ;}

using namespace std ;

int main() {

    string text = "Cool Summer?" ;
    list <char>    lc (text.begin(), text.end()) ;  // ���ڿ��� ����Ʈ�� �ʱ�ȭ ��Ű�� ���
    // python�̶�� lc = list(text)  �����ϰ� ������...
    list <string>  ls (text.begin(), text.end()) ;

    int i = 0 ;
    for (auto w : lc ) {
            i++ ;
            cout << "\n -> " << setw(3)<<  i << " = " << w  ;
    }

    allout(" lc�� ���� ", lc ) ;

}

