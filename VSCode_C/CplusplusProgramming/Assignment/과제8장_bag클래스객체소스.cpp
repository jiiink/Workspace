//8 �����̳� Ŭ���� - ��ü�� ���� 
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <typeinfo>
using namespace std;

class Person {
private:
    string pid;
    string pname;
public:
    Person() {}
    Person(string pid, string pname) : pid(pid), pname(pname) { }
    virtual void Show(); //pid, pname
    virtual bool operator==(Person&);
    string getPid() {return pid;}
};
bool Person::operator==(Person& p) {
    return (this->pid == p.pid && this->pname == p.pname);
}
void Person::Show() {
    cout << "pid : " << this->pid << " pname : " << this->pname; 
}

class Employee : public Person {
private:
    string eno;
    string role;
public:
    Employee() : Person() {}
    Employee(string pid, string pname, string eno, string role) : Person(pid, pname), eno(eno), role(role) { }
    bool operator==(Person&) override;
    void Show();
};
bool Employee::operator==(Person& p) {
    Employee& e = dynamic_cast<Employee&>(p);
    return (Person::operator==(p) && this->eno == e.eno && this->role == e.role);
}
void Employee::Show() {
    Person::Show();
    cout << " eno : " << this->eno << " role : " << this->role; //eno, role
}



class Coder : public Employee {
private:
    string language;
public:
    Coder() : Employee() {}
    Coder(string pid, string pname, string eno, string role, string language) : Employee(pid, pname, eno, role), language(language) {}
    void Print();
    bool operator==(Person&) override;
    void Show();
};
bool Coder::operator==(Person& p) {
    if (typeid(p) == typeid(Coder)) { //p�� Coder ��ü�� ����Ű�� �ִ��� Ȯ���Ѵ�.
        Coder& c = dynamic_cast<Coder&>(p);
        return (this->Employee::operator==(p) && this->language == c.language);
    } else return false;
}
void Coder::Show() {
    Employee::Show();
    cout << " language : " << language << endl;
}
void Coder::Print() {
    cout << language;
}


class Student : public Person {//virtual�� Person() �����ڸ� ȣ������ ����
private:
    string sid;
    string major;
public:
    Student(string sid, string major, string pid, string pname) : Person(pid, pname), sid(sid), major(major) { }
    // int operator < (Student&);
    bool operator==(Person&) override;
    void Show();
};
bool Student::operator==(Person& p) {
    Student& s = dynamic_cast<Student&>(p);
    return (Person::operator==(p) && this->sid == s.sid && this->major == s.major);
}
void Student::Show() {
    Person::Show();
    cout << " sid : " << sid << " major : " << major;
}


class PartTimeStudent : public Student {
private:
    string workType;
public:
    PartTimeStudent(string workType, string sid, string major, string pid, string pname) :
        Student(sid, major, pid, pname), workType(workType) {}
    int operator < (PartTimeStudent&);
    bool operator==(Person&) override;
    void Show();
};
bool PartTimeStudent::operator==(Person& p) {
    PartTimeStudent& pt = dynamic_cast<PartTimeStudent&>(p);
    return (Student::operator==(pt) && this->workType == pt.workType);
}
void PartTimeStudent::Show() {
    Student::Show();
    cout << " workType : " << workType << endl;
}




#define DefaultSize 30
class Bag {//������ ����. �ߺ� ����
public:
    Bag() {//������
        MaxSize = DefaultSize;
        top = 0;
        for (int i=0; i<MaxSize; i++) {
            arr[i] = nullptr;
        }
    }
    ~Bag() {} // �Ҹ���
    virtual void Add(Person*); //���� �ϳ��� bag�� ����. �ߺ� üũ �� �ϰ� ������ ����
    Person* Delete(); //bag���� ���� �ϳ��� ���� �������� ����. ������ ����, �����ϰ� ����.
    //�������� ������. 
    bool IsFull();
    // bag�� ��ȭ�����̸� true, �׷��� ������ false�� ��ȯ
    bool IsEmpty();
    // bag�� ���� �����̸� true, �׷��� ������ false�� ��ȯ
    int Top();
    Person* Find(string); //pid �� ���� Person �� ã�´�.
    virtual void Print();
protected:
    void Full() {cout << "It is full." << endl;} // bag�� ��ȭ������ ���� ��ġ
    void Empty() {cout << "It is empty." << endl;} // bag�� ���� ������ ���� ��ġ
    Person* arr[DefaultSize];
    int MaxSize; // �迭�� ũ��
    int top; // �迭���� ���Ұ� ��� �ִ� ���� ���� ��ġ, ��ü�� ���� �� �� �ִ���
};
bool Bag::IsFull() {
    if (top == MaxSize) return true;
    else                return false;
}
bool Bag::IsEmpty() {
    if (top == 0) return true;
    else          return false;
}
void Bag::Add(Person* p) {
    if (IsFull()) Full();
    else {
        arr[top] = p;
        top++;
    }
}
void Bag::Print() {
    Person* p;
    for (int i=0; i < top; i++) {
        p = arr[i];
        p->Show();
    }
}
int Bag::Top() {
    int i=0;
        
    while (this->arr[i] != nullptr) {
        i++;
    }
    
    return i;
}
Person* Bag::Find(string id) {//�Է��� pid �� set �� �ִ� pid �� ���Ѵ�.
    for (int i=0; i<top; i++) {
        if (arr[i]->getPid() == id) {//set ���� �Է��� pid �� ã���� ��
            return arr[i];
        }
    }
    cout << "Can't find that person" << endl;
    return nullptr;
}
Person* Bag::Delete() {
    srand(time(nullptr));    
    int i = rand() % 30; //0���� 29������ ���� ����

    Person* deleted = arr[i];
    arr[i] = nullptr;

    for (int j=i; j+1<top; j++) { 
        arr[j] = arr[j+1];
    }
    top--;
    return deleted;
}



class Set : public Bag {//������ ����. �ߺ� ����
public:
    Set() : Bag() {}
    ~Set() {}      // �Ҹ���
                 //Set �ڷᱸ���� �°� Add(), Delete() �Լ� ������
    void Add(Person*); //�ߺ� üũ�ϰ�, Bag::Add() �� ȣ��
    void Print() {Bag::Print();}
    bool IsDuplicate(Person*);
};
bool Set::IsDuplicate(Person* p) {
    for (int i=0; i<top; i++) {
        if (*arr[i] == *p) {
            cout << "It is duplicate top : " << top << " i : " << i << endl;
            return true;
        }
    }
    return false;
}
void Set::Add(Person* p) {
    if (IsEmpty()) Bag::Add(p); //ó���� �������� ���� �� �ٷ� �߰�
    else if (IsFull()) cout << "It is full set" << endl;
    else if (!IsDuplicate(p)) {
        Bag::Add(p);
    }
}



void Show(Person* p[]) {//�������ε�
    for (int i=0; i<DefaultSize && p[i] != nullptr; i++) {
        p[i]->Show();
    }
}



int main() {
    Person* members[30];//Person �������� �����ϴ� ���� �ذ� �ʿ� 
    Set s;
    int select;
    string name;
    Person* p;

    while (1)
    {
        cout << "\n���� 1: member  ��ü 30�� �Է�, 2. set ���, 3: set���� ��ü ã��,4. set���� ���� ��ü ����, 5. members[] �迭�� show �Լ�, 6. ����" << endl;
        cin >> select;

        switch (select) {
        case 1://1: Coder ��ü 10�� �Է°� ���
        {
            members[0] = new Coder("p1", "hong", "E1", "Coding", "C++"); //pid, pname, eno, role, language
            members[1] = new Coder("p2", "hong", "E2", "Coding", "C++");
            members[2] = new Coder("p3", "kim", "E3", "Test", "JAVA");
            members[3] = new Coder("p4", "lee", "E4", "Test", "C#");
            members[4] = new Coder("p5", "ko", "E5", "Design", "GO");
            members[5] = new Coder("p6", "choi", "E6", "Design", "GO");
            members[6] = new Coder("p7", "han", "E7", "Sales", "PYTHON");
            members[7] = new Coder("p8", "na", "E8", "Sales", "C");
            members[8] = new Coder("p9", "you", "E9", "Account", "C++");
            members[9] = new Coder("p10", "song", "E10", "Production", "C#");
            members[10] = new PartTimeStudent("coding", "s001", "computer", "23001", "hong"); //workType, sid, major, pid, pname
            members[11] = new PartTimeStudent("coding", "s002", "DB", "23002", "hong");
            members[12] = new PartTimeStudent("tester", "s003", "Java", "23003", "hong");
            members[13] = new PartTimeStudent("manager", "s004", "���", "23004", "hong");
            members[14] = new PartTimeStudent("accountant", "s005", "����", "23005", "hong");
            members[15] = new PartTimeStudent("salesman", "s006", "�Ƿ�", "23006", "hong");
            members[16] = new PartTimeStudent("planner", "s007", "����", "23007", "hong");
            members[17] = new PartTimeStudent("audit", "s008", "ȭ��", "23008", "hong");
            members[18] = new PartTimeStudent("DBA", "s009", "ȭ��", "23009", "hong");
            members[19] = new PartTimeStudent("DBA", "s010", "���", "23010", "hong");
            members[20] = new PartTimeStudent("coder", "s011", "computer", "23011", "hong");
            members[21] = new PartTimeStudent("coder", "s012", "DB", "23012", "hong");
            members[22] = new PartTimeStudent("tester", "s013", "Java", "23013", "hong");
            members[23] = new PartTimeStudent("designer", "s014", "���", "23014", "hong");
            members[24] = new PartTimeStudent("designer", "s015", "����", "23015", "hong");
            members[25] = new PartTimeStudent("AS", "s016", "�Ƿ�", "23016", "hong");
            members[26] = new PartTimeStudent("coder", "s017", "����", "23017", "hong");
            members[27] = new PartTimeStudent("audit", "s018", "ȭ��", "23018", "hong");
            members[28] = new PartTimeStudent("engineer", "s019", "ȭ��", "23019", "hong");
            members[29] = new PartTimeStudent("designer", "s020", "���", "23020", "hong");
        
            for (int i = 0; i < 30; i++) { 
                s.Add(members[i]);
            }
            break;
        }
        case 2:
            // set�� ��� ��ü ����ϱ�
            s.Print();
            break;
        case 3:
        {
            // set���� ��ü ã��
            cout << "Insert the pid : "; //ã�� ���� ����� pid �� �Է��Ѵ�.
            cin >> name;
            p = s.Find(name);

            if (p == nullptr) break;
            else p->Show();
            break;
        }
        case 4:
            //set���� ���� ��ü �����ϱ�
            if (s.IsEmpty()) {
                cout << "It is empty set" << endl;
                break;
            } else {
                p = s.Delete();
                p->Show();
                break;
            }
        case 5:
            //members[]��  ��� ��ü�鿡 ���� show() ����: polymorphic function �����ϱ�
            Show(members);
            break;
        default:
            exit(0);
        }
    }
    system("pause");
    return 1;
}