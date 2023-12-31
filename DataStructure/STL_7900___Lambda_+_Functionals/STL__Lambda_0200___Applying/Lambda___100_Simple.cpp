#include <bits/stdc++.h>
using namespace std;
#include "mytool.h"


// �Լ� ��ü�� ����
struct SumFunctor : public unary_function<int, void> {
    SumFunctor(int& number) : sum(number) {}

    void operator() (int& number) { sum += number;  }

    private:
        int& sum;
};

int main() {
    array <int, 5> numbers = { 1, 2, 3, 4, 5 };
    int sum = 0;


    for_each(numbers.begin(), numbers.end(), SumFunctor(sum));
    cout << "\n �Լ��� ���� Sum = " << sum ;
    sum = 0;

    for_each(numbers.begin(), numbers.end(), [&sum](int& number) {
        sum += 10* number;    }
    );
    cout << "\n lambda �Լ��� ���� Sum = " << sum ;

    return 0;
}
