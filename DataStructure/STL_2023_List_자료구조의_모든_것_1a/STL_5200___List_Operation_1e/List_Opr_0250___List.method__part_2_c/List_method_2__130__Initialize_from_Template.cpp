/* 2. C++11 std::intializer_list

C++11������ �̸� std::initializer_lists ���ø� Ŭ������ ���� Ȯ���Ͽ�����,
�̴� STL�� �⺻ �����̳ʵ��� ������ ��� Ŭ�������� ����� �����ϴ�.

template<typename T>
class initializer_list;

std::initializer_list<T> ������Ʈ�� T Ÿ���� �迭�� ����
�������� �����ϴ� �淮ȭ�� ������ ������Ʈ�� �� �� �ִ�.
std::initializer_list<T> ������Ʈ�� �Ʒ��� ���� ��Ȳ�鿡�� �ڵ����� �����ȴ�.
braced-init-list( { ... } )�� ����Ʈ�� �ʱ�ȭ�� ���Ǵ� ���
( ��1. XXX = { ... }  ��2. void func( { ... } ) )
(Uniform initialization ����)
braced-init-list( { ... } )�� auto ������ ���ε��Ǵ� ���
(ranged-for-loop �ȿ����� ��� ����)
(4. brace-init-list ����)

C++11 �����Ϸ��� �� ��Ȳ�鿡�� { ... } syntax�� ���� �������� std::initializer_list<T>
������Ʈ�� ������ ���� ���̴�.
initializer_list�� �� ���� ������ (T* begin, T* end)�� �̿��� �����ϴ� ����� �ְ�,
�ϳ��� �����Ϳ� ������ ������ �̿��� �����ϴ� ����� �ִµ�, VS2013�� ���
�ΰ��� ������(*begin, *end)�� �̿��Ͽ� �����Ǿ� �ִ�.
initializer_list ������Ʈ�� ����� deep-copy�� �ƴ�, �������� shallow-copy��
�̷������. ����, ���� initializer_list ������Ʈ�� �ı��� ���� �����
initializer_list<T> ������Ʈ�� T �����͵��� ������ �������� �������� ���Ѵ�.  */


#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <initializer_list>
using namespace std;

template <class T>
struct Sample {
    Sample(initializer_list<T> l) : v(l) {
        cout << "constructed with a " << l.size() << "-element list\n";
    }
    void append(initializer_list<T> l) {
        // initializer_list�� begin()/end() �޽�带 �����Ѵ�
        v.insert(v.end(), l.begin(), l.end());
    }
    pair<const T*, std::size_t> c_arr() const  {
        return { &v[0], v.size() };    // ��ȯ������...
    }
    vector<T> v;
};


// �Լ� ���ø��� ���ڷ� ��� �������� �׽�Ʈ�ϱ� ���� �� �Լ� ���ø�
template <typename T>
void templated_fn(T) {}

int main( ) {


    Sample<int> s = { 1, 2, 3, 4, 5 }; // intializer-list�� ���ڷ� ������ ������ �Լ� ȣ��
    s.append({ 6, 7, 8 });             // append �Լ��� ���ڷν��� initializer_list
    cout << "The vector size is now " << s.c_arr().second << " ints:\n";

    // ranged-base-for �� �ȿ��� auto ���Ŀ� ���ε��Ǿ� �����Ǵ� intializer_list
    for (int x : { -1, -2, -3 })    cout << x << ' ';

    cout << '\n';

    // ���� auto�� ���ε��Ǹ鼭 initializer_list ����
    // initialize_list�� size()�� ���Ҽ��� ��ȯ�Ѵ�
    auto al = { 10, 11, 12 };
    cout << "The list bound to auto has size() = " << al.size() << '\n';

     // �Ʒ� 2���� OK
    templated_fn<initializer_list<int> >({ 1, 2, 3 });
    templated_fn<vector<int> >({ 1, 2, 3 });


    // STL �����̳� �ʱ�ȭ�� ôô
    // ��� initializer_list�� �����Ǹ�, intializer_list�� ���ڷ� �޴� �����ڸ� ȣ���ϰ� �ȴ�.


    string s1{'a', 'b', 'c', 'd'};
    vector<string> v1 = { "xyzzy", "plugh", "abracadabra" };
    map<int, string> m =  {
        { 1, "a" },  { 2, { 'a', 'b', 'c' } }, { 3, s1 }  };
    return 0;

} // end of main( )
