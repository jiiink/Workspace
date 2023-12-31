/// ���簢���� �־� �����ϰ� �̰��� ��ü ���̼������ �����ϴ� PQ
#include <bits/stdc++.h>
using namespace std;


class rect { // ���簢��
public:
    rect (int w, int h) : _w(w), _h(h) {}

    void print () {
        cout << "rect(w,h): " << _w << " * " << _h << " : area=  " << _w * _h << endl;
    }
    // greater-than operator > �� �����մϴ�. �� operator�� min-heap�� ������ �� ���Դϴ�.
    // class ��ſ� struct�� ���� �͵� �����մϴ�.
    bool operator > (const rect& rhs) const { return _w * _h > rhs._w * rhs._h; }

private:
    int _w, _h;
};

int main () {   // min-heap�� �����մϴ�.
    priority_queue<rect, vector<rect>, greater<rect> >       q;
    //             ����   �������      �񱳹��        ���� �̸�
    q.push (rect (1, 5));
    q.push (rect (7, 6));
    q.push (rect (1, 2));
    q.push (rect (8, 2));
    q.push (rect (5, 5));
    q.push (rect (7, 3));
    q.push (rect (3, 3));


    while (!q.empty ()) {
        rect t = q.top ();
        q.pop ();
        t.print ();  // print (1,2), (1,5), (8,2), (7,6)
    }

    return 0;
}

