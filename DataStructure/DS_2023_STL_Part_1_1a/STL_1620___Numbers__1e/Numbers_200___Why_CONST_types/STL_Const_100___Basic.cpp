#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std ;


const double Pi = 3.14159;
const char newline = '\n';

int main () {

    double r=5.0;               // radius
    double circle;

    circle = 2 * Pi * r;

    Pi += 0.001 ;  // ���� ������ ������ Ȯ���غ�����.
    cout << circle;
    cout << newline;
}
