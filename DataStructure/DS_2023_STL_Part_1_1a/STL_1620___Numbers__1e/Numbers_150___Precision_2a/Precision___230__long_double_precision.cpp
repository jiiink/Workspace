#include <cstdio>  // �ݵ�� �� library�� ����ؾ� �Ѵ�.
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
   long double d = 0.12345678910;
   cout << fixed;
   cout << setprecision(12) << d;
   return 0;
}
