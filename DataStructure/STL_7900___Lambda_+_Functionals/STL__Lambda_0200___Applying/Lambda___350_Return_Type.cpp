#include <bits/stdc++.h>
using namespace std;


int main() {
    // implicit return type
    auto foo = [] { return 3.14;};

    // explicit return type
    auto bar = []() -> float { return 3.14f; };

    // warning. double���� float���� �Ͻ��� ����ȯ.
    float x = foo();

    // OK
    float y = bar();

    return 0;
}
