#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std;
#include <cctype>

// ��ҹ��ڸ� �����ϴ� ���ڿ� ��
bool compare_nocase (const string& first, const string& second) {
    unsigned int i=0;
    while ( (i<first.length()) && (i<second.length()) ) {
        if (tolower(first[i])<tolower(second[i]))
            return true;
        else if (tolower(first[i])>tolower(second[i]))
            return false;
        ++i;
    }
    return ( first.length() < second.length() );
} // end

bool compare_last (const string& first, const string& second) {
    unsigned int i=0;

    return ( first.back() < second.back() );
} // end

bool compare_70(int a, int b) {
    return abs(70 - a) < abs(70 - b);
}


int main () {
    list<string> mylist {"Tomato","Beer","banana","Orange", "Mango","grape","Plum","Jamong" };
    list<int> Ascore = {67, 45, 34, 89, 87, 13, 67, 99, 64, 100, 97};
    list<string>::iterator it;

    myout("before = ", Ascore);
    Ascore.sort(compare_70);
    myout("after = ", Ascore);

    myout("�ʱ� mylist[]= ", mylist ) ;
    mylist.sort();
    myout("���� �� mylist[]= ", mylist ) ;

    myout("�ʱ� mylist[]= ", mylist ) ;
    mylist.sort(compare_nocase);
    myout(" compare_nocase�� ���� �� mylist[]= ", mylist ) ;


    myout("�ʱ� mylist[]= ", mylist ) ;
    mylist.sort(compare_last );
    myout(" compare_last�� ���� �� mylist[]= ", mylist ) ;
    return 0;
}


