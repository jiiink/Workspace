#include <iterator>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    istream_iterator<string> cinPos(cin);
    ostream_iterator<string> coutPos(cout," <== Third tokens \n ");

    // �Է��� ���� ���� ������ ���� �Է��� ���� ^D

    while (cinPos != istream_iterator<string>()) {

        advance (cinPos, 2);  // ù 2���� string�� pass�϶�.

        // read and write the third string
        if (cinPos != istream_iterator<string>()) {
            *coutPos++ = *cinPos++;
        }
    }
    cout << "\n �� " << endl;
}
