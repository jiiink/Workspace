// �Ϲ����� Ʈ���� ������ �� �ִ� STL-like ����

#include <algorithm>
#include <string>
#include <iostream>
#include "tree_new.hh"

using namespace std;

int main(int, char **)    {

   tree<string> tr;
   tree<string>::iterator top, one, xone, two, loc, banana, cherry;

   top=tr.begin();
   one=tr.insert(top, "One"); // root �����

   two=tr.append_child(one, "Two"); // tree tr���� node "one"�� �ڽĿ� two�� �Ŵ�.
   tr.append_child (two, "apple");

   banana=tr.append_child(two,  "banana");
   cherry = tr.append_child(banana, "cherry");

   tr.append_child(cherry, "iphone");
   tr.append_child(two,    "Orange");
   tr.append_child(two,    "Papaya");
   tr.append_child(one,    "three");

   loc=find(tr.begin(), tr.end(), "Two");

   if(loc!=tr.end()) {
        tree<string>::sibling_iterator sib=tr.begin(loc);
        cout << "Two�� ��� Child = { " ;
        while(sib!=tr.end(loc)) {
            cout << (*sib) << ", " ;
            ++sib;
        } // end of while{}
        cout << "} " << endl ;

        cout << "\n One node�� depth���� -2�� ��带 ��� ��� \n" ;
        loc=find(tr.begin(), tr.end(), "One");
        tree<string>::iterator sib2=tr.begin(loc);
        tree<string>::iterator end2=tr.end(loc);

        cout << "\nOne " << endl ;
        while(sib2!=end2) {
            for(int i=0; i < tr.depth(sib2); ++i)
                    cout << "---> ";
            cout << (*sib2)<< "(" << tr.depth(sib2)<< ")" << endl;
            ++sib2;
        } // end of while
   } // end of if()

} // end of main()
