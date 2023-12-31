// STL PQ���� begin( ), end( )�� ��� ��Ģ������ iterating�� �ȵ�����
// �̷��� ������ �� ���� �ֽ��ϴ�. �� ������ ���� ���˴ϴ�.

#include<iostream>
#include<queue>
using namespace std;

template<class T, class C = vector<T>, class P = less<typename C::value_type> >
struct heapq :priority_queue<T,C,P> {
    using priority_queue<T,C,P>::priority_queue;
    typename C::iterator begin() { return priority_queue<T, C, P>::c.begin(); }
    typename C::iterator end()   { return priority_queue<T, C, P>::c.end();   }
};


int main(){
    heapq<int> q;
    q.push(   7);
    q.push( -45);
    q.push( 100);
    q.push(  80);
    q.push(  34);
    q.push(  45);
    q.push(  56);
    q.push( -11);
    for(auto e:q) cout<<e<<endl;
}
