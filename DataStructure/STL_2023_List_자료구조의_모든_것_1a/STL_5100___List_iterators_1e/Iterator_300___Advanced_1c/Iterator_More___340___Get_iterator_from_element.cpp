#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;


list<int>::iterator pointerToIter (int* myPointer) {
    //iterator�κ��� bye ũ���� ������ �Ÿ��� ���.
    size_t iterOffset = (size_t)&(*((list<void*>::iterator)nullptr));
    list<int>::iterator iter;
    *(intptr_t*)&iter = (intptr_t)myPointer - iterOffset;

    return iter;
}

int main () {
    list<int> intList;
    intList.push_back (10);
    int* i1 = &intList.back ();

    intList.push_back (20);
    intList.push_back (30);
    int* i3 = &intList.back ();

    intList.push_back (40);
    intList.push_back (50);
    int* i5 = &intList.back ();

    Outlist("�ʱ�", intList) ;

    intList.erase (pointerToIter (i1)); // �������� iterator ��ġ�� ���Ҹ� ����.
    intList.erase (pointerToIter (i3));
    intList.erase (pointerToIter (i5));

    Outlist("�ı�", intList) ;

    return 0;
}
