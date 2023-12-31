// �ϳ��� ����� ���� �ƴ϶� vector�� ������ ��Ƽ� �ѹ��� �ִ´�.
// ���� ����ϰ� �߿��� ����̴�.

#include <iostream>
#include <vector>
using namespace std;

int main () {

    vector <int> first;         // first�� <������> �̸� �̰��� vector�̴�.
    vector <int> second;
    vector <int> third;

    first.assign (10, 2020);             // 2020�� 10�� �ݺ��ؼ� ���� �ִ´�.
    vector <int>::iterator it;
    it=first.begin()+1;

    second.assign (it,first.end()-1); // first �� ó���� ���� ������ ���ҵ�

    int myints[] = {1776,7,4};
    third.assign (myints,myints+3);   // ������ ��� begin() ��� �Ұ�. �迭�� ���� �޴´�.

    cout << "Size of first: "  << int (first.size()) << endl;
    cout << "Size of second: " << int (second.size()) << endl;
    cout << "Size of third: "  << int (third.size()) << endl;

    return 0;
}
