//�й� : 202055518 
//�̸� : �躴��
//������ȣ : 209404059
#include <iostream>
#include <string.h>
using namespace std;

class Dept {
private : 
    string dname;
    char* city;
public : 
    Dept();
    Dept(string dname, const char* city) {
        this->city = new char[strlen(city) + 1];
        strcpy(this->city, city);
        //this->dname = new string[strlen(dname) + 1];
        strcpy(this->dname, dname);
    }
    ~Dept() {
        delete[]city;
    }
    friend ostream& operator<<(ostream&, Dept&);
    friend istream& operator>>(istream&, Dept&);    
};

ostream& operator<<(ostream&os, Dept& d) {
    os << "dname : " << d.dname << " city : " << d.city << endl;
    return os;
}
istream& operator>>(istream& is, Dept& d) {
    d.dname = is;
    return is;
}

class Emp {
private : 
    string* ename;
    Dept* dept;
public : 
    Emp(string* ename, Dept* dept) {
        this->ename = ename;
        this->dept = dept;
    }
    Emp() {
        this->dept = nullptr;
        this->ename = NULL;
    }
    ~Emp() {

    }
    
    friend Emp& changeName(Emp&);
    friend ostream& operator<<(ostream&, Emp&);
    friend istream& operator>>(istream&, Emp&);
};

istream& operator>>(istream& is, Emp& d) {
    d.ename = 
}

class Stack {
private : 
    Emp* items[20];
    int top;
public:
    Stack() {
        for (int i=0; i<20; i++) {
            this->items[i] = nullptr;
        }
    }
    ~Stack() {
        for (int i=0; i<20; i++) {
            delete items[i];
        }
    }

    void Show();
    void operator=(Stack&);
    void push(Emp&);
    Emp& pop();
};

Emp& Stack::pop() {
    Emp* temp;

    int index = 0;

    while (1) {
        if (this->items[index] != NULL) {
            index++;
        } else break;
    }

    temp = this->items[index-1];
    this->items[index-1] = nullptr;

    return *temp;
}

void Stack::push(Emp& e) {
    int index = 0;

    while (1) {
        if (this->items[index] != NULL) {
            index += 1;
        } else {
            break;
        }    
    }

    this->items[index] = new Emp(e.ename, e.dept);
}

void Stack::Show() {
    int index = 0;

    while (1) {
        if (this->items[index] != NULL) {
            index += 1;
        } else {
            break;
        }    
    }
    for (int i=0; i<index; i++) {
        cout << "name : " << this->items[i]->ename << "\t dept : " << this->items[i]->dept << endl;
    }
}

Emp& changeName(Emp& e) {
    //e.ename �� �����Ѵ�.
    //e.ename = "lee";
    strcpy(e.ename, "lee");
    return e;
}

int main () {
    while (1) {
        Stack s2;

        int select;
        cout << "\n���� 1: Push, 2. Pop, 3: ���� ��� ��ü ���, 4. Pop�� ��ü�� �̸� ����, 5. ����" << endl;

        cin >> select;
        switch (select) {
            case 1:
            {
                string name, dept;
                //ȭ�鿡�� �Է¹޴µ� operator>>()�� ���
                for (int i=0; i<3; i++) {
                    //Emp* e = new Emp();
                    // cin >> e;
                    cin >> name >> dept;
                    Emp* e(name, dept);
                    s2.push(&e);
                }
                //Emp e("kim", "cse");
                //s2.push();
                break;
            }
            case 2:
            {
                for () {
                    Emp e2 = s2.pop();
                    cout << e2;//Emp ����� Dept ��±��� ó���ؾ� �Ѵ�.
                }
                break;
            }
            case 3:
            {
                cout << s2;
                break;
            }
            case 4:
            {
                Emp e3 = s2.pop();
                Emp e4;
                e4 = changeName(e3);
                break;
            }
            default :
                exit(0);
                break;
        }
    }
    system("pause");
    return 1;
}
