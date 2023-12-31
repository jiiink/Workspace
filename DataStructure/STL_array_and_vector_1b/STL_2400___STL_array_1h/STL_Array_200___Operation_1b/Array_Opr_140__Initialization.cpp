/*
std::array vs std::vector
1. array �� ����� ����, vector �� �������� ����.
2. array �� ���� �޸� ������� ����. vector �� ���.

std::array vs C-Array
1. array�� ��ü��. ����� �˼� ����. C-Array �� �Ұ�
2. array�� ������Ʈ�� �ϳ��� ��� ��. C-Array �� �Ұ�
3. array�� ������ �Ķ���͸� ���� ��������� ũ�⸦ �˷���� ��.
   C-Array�� �ʱ�ȭ�� ���� ũ�⸦ �����س� �� ����.
4. array�� ���� type������ ����(assignment) ����. C-Array �� �Ұ�.           */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    array <int, 5> myarray;         // �ݵ�� ũ�Ⱑ compile time�� �����Ǿ�� �Ѵ�.

    myarray = { 0, 1, 2, 3, 4 };    // okay
    cout << endl ; for(auto& s: myarray ) cout << s << ' ';

    myarray = { 9, 8, 7 };          // okay, elements 3 and 4 are set to zero!
    cout << endl ; for(auto& s: myarray ) cout << s << ' ';
    // myarray = { 0, 1, 2, 3, 4, 5 }; // �Ұ��� ,  ������ ������ 5��

    myarray[3] = -222; // no bounds checking
    myarray.at(4) = 3; // does bounds checking

    cout << endl ; for(auto& s: myarray ) cout << s << ' ';

} // end of main( )
