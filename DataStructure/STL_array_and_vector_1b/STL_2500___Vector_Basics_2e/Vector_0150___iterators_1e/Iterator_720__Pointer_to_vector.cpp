#include <bits/stdc++.h>
using namespace std;


struct Foo{
    vector<int> a;
};              // Foo�� struct�̸� �� �ȿ��� a��� ���� vector�� �ִ�.

int main() {

    Foo* f1 = new Foo; // f1�� Foo�� ����Ű�� pointer

    f1->a.push_back(  175);  // f1�� ����Ű�� vector�� �ڿ� 175�� �־��.
    f1->a.push_back(  225);
    f1->a.push_back(  333);
    f1->a.insert( f1->a.begin(),  500);

    cout << "f1�� �����ϴ� vector�� ù ���� =" << *f1->a.begin() << endl ;
    cout << "f1�� �����ϴ� vector�� �� ���� =" << *(f1->a.end()-1) << endl ;

    cout <<  "sizeof(Foo) = " << sizeof(Foo)            << endl;
    cout <<  "sizeof(f1) = " << sizeof(f1)              << endl;
    cout <<  "sizeof(f1->a) = " << sizeof(f1->a)        << endl;
    cout <<  "sizeof(f1->a[0]) = " << sizeof(f1->a[0])  << endl;

 //   delete[] f1;

}
