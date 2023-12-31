#include <bits/stdc++.h>
#include <chrono>
using namespace std ;
/*
volatile�� ����� ������ �ܺ����� ��������
�� ���� �������� �ٲ� �� ������ ���Ѵ�.
���� �����Ϸ��� volatile ����� ������ ���ؼ���
����ȭ�� �������� �ʴ´�.
volatile ������ ������ ��� �������Ϳ� �ε�� ���� ������� �ʰ�
�Ź� �޸𸮸� �����Ѵ�.
�� volatile�̶�� Ű���尡 �ʿ����� �����Ϸ��� ����
�Ϲ����� C/C++ �����Ϸ��� � ������ ����ȭ�� �����ϴ��� �˾ƾ� �Ѵ�.
������ �ϵ��� �����ϱ� ���� ���� �ڵ带 ���캸��.
*/

volatile int sink;
int main() {

    cout << fixed << setprecision(9) << left;
    for (auto size = 1ull; size <   // record start time

        auto start = chrono::system_clock::now();

                vector<int> v(size, 42);
                sink = accumulate(v.begin(), v.end(), 0u); // make sure it's a side effect
        auto end = chrono::system_clock::now();

        chrono::duration<double> diff = end - start;

        cout << "Fill and iterate a vector of " << setw(9)
             << size << " ints : " << diff.count() << " s\n";
    }
}
