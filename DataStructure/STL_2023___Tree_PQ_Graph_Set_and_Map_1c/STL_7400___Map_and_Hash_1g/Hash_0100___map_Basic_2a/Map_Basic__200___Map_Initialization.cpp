#include <bits/stdc++.h>
using namespace std;

int main() {  // map�� ���Ҵ� brace�� �����Ѵ�.
    map <string, double> coll { { "red", 9.9 }, \
                             { "blue", 3.17 }, \
                             { "yellow", -0.1 }, \
                             { "green", 5.4 }, \
                             { "magenta", 0.77 }  } ;

    // ���� ���� �����Ͽ� ������. :
    for_each (coll.begin(), coll.end(),[] (pair<const string,double>& elem)
                        { elem.second *= elem.second;  }
              );

    // print each element:
    for_each (coll.begin(), coll.end(),[] (const map<string,double>::value_type& elem) {
                    cout << elem.first << " :: " << elem.second << endl;
              });

    return 0 ;
}
