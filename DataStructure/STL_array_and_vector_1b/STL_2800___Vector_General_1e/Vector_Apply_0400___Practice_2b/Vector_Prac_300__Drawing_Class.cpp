#include <bits/stdc++.h>
using namespace std;

class Time{
protected:
     int hour,min,sec;
public:
     Time(int h,int m,int s) { hour=h;min=m;sec=s; }
     void OutTime() { printf("%d:%d:%d ",hour,min,sec); }
};

template<typename C>
void dump(const char *desc, C c) {
     cout.width(12);cout << left << desc << "==> ";
     for (unsigned i=0;i<c.size();i++) { c[i].OutTime(); }
     cout << endl;
}

template<typename C>
void dump2(const char *desc, C c) {
     cout.width(12);cout << left << desc << "==> ";
     for (unsigned i=0;i<c.size();i++) { c[i]->OutTime(); }
     cout << endl;
}

class Graphic { public: virtual void Draw(){ puts("�׷��� ������Ʈ�Դϴ�."); }  };
class Line   : public Graphic { public: void Draw() { puts("���� �߽��ϴ�."); } };
class Circle : public Graphic { public: void Draw() { puts("���׶�� �׷ȴ� ġ��."); } };
class Rect   : public Graphic { public: void Draw() { puts("��� �簢���Դϴ�."); } };
void del(Graphic *g) { delete g; }


int main() {
	// ����1. - ���Ϳ� � ����ü�� �Է��غ���
     vector<Time> vt;
     vt.push_back(Time(1,1,1));
     vt.push_back(Time(2,2,2));
     dump("��� 2��",vt);

	 // ����2. - ���Ϳ� ���� �����ϴ� ���� �ƴ϶�, ���Ϳ��� ����ü�� ���� pointer�� �ִ´�.
	 // �̷��� �ϸ� ���߿� �� �ڷᱸ���� �ı�(destruction)�ϱⰡ ����.
	 vector<Time *> vt2;
	 vector<Time *>::iterator it;
     vt2.push_back(new Time(1,1,1));
     vt2.push_back(new Time(2,2,2));
	 vt2.push_back(new Time(3,3,3));
	 vt2.insert(vt2.begin()+1, new Time(8,8,8));
     dump2("��� 3��",vt2);

     for (it=vt2.begin();it!=vt2.end();it++) {
          delete *it;
     }

	 // ���� 3. - �ϳ��� ���Ϳ� �� ������ �پ��� ���� ��ü�� �־ �����
	vector<Graphic *> vg;
    vector<Graphic *>::iterator git;

     vg.push_back(new Graphic());
     vg.push_back(new Rect());
     vg.push_back(new Circle());
     vg.push_back(new Line());

     for ( git=vg.begin(); git!=vg.end(); git++) {
          (*git)->Draw();
     }
     for_each(vg.begin(),vg.end(),del);


} // end of main()
