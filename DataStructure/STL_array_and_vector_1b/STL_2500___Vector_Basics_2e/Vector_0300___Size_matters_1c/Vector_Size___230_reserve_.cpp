
#include <bits/stdc++.h>
using namespace std ;


int main () {

    vector<int> myints;
    cout << "0. �ʱ� size: " << myints.size() << '\n';

    for (int i=0; i<10; i++)         myints.push_back(i);

    cout << "1. 10�� ���� �� size: " << myints.size() << '\n';
    cout << "2. 10�� ���� �� capacity: " << myints.capacity() << '\n';

    myints.insert (myints.end(),10,100);
    cout << "3. 10�� �߰� ���� �� size: " << myints.size() << '\n';
    cout << "4. 10�� �߰� ���� �� capacity: " << myints.capacity() << '\n';

    myints.pop_back();
    cout << "5. �ϳ� �� �� size: " << myints.size() << '\n';
    cout << "6. �ϳ� �� �� capacity: " << myints.capacity() << '\n';

    myints.reserve(100 ) ;
    cout << "7. reserve(100) �� size: " << myints.size() << '\n';
    cout << "8. reserve(100) �� capacity: " << myints.capacity() << '\n';
    return 0;
}
