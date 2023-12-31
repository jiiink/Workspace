/*
* ��ü���� Set�� �����ϴ� ���̺��� �迭�� ���� Ŭ���� �����ϱ�- template ���� �ϼ��ϱ�
*/
#include <iostream>
#include <string>
#define DefaultSize 50
using namespace std;

class Person { 
    string pid;
    string pname;
public:
    Person() {}
    Person(string pid, string pname) : pid(pid), pname(pname) {}
    virtual bool Equals(string) = 0;
    string GetName() { return pname; }
    virtual void SetName();
    void Print();
    virtual bool operator==(Person&);
};
bool Person::operator==(Person& p) {
    return pid == p.pid && pname == p.pname;
}
void Person::SetName() {
    pid = "???"; 
    pname = "???";
}
void Person::Print() {
    cout << pid << " " << pname;
}
bool Person::Equals(string str) {
    return pname == str;
}




class Employee : public Person {
private:
    string eno;
    string role;
public:
    Employee() : Person() {}
    Employee(string pid, string pname, string eno, string role) : eno(eno), role(role), Person(pid, pname) {}
    void Print();
    bool Equals(string str);
    void SetName();
    bool operator==(Employee&);
};
bool Employee::operator==(Employee& e) {
    Person* this_person = dynamic_cast<Person*>(this);
    Person& p = dynamic_cast<Person&>(e);
    return *this_person == p && eno == e.eno && role == e.role;
}
void Employee::SetName() {
    eno = "???";
    role = "???";
    Person::SetName();
}
bool Employee::Equals(string str) {
    return Person::Equals(str);
}
void Employee::Print() {
    Person::Print();
    cout << " " << eno << " " << role << "\t";
}


class Student {
private:
    string sid;
    string major;
public:
    Student(string sid, string major) : sid(sid), major(major) {}
    virtual bool Equals(string) = 0;
    virtual void SetName();
    void Print();
    virtual bool operator==(Student&);
};
bool Student::operator==(Student& s) {
    return sid == s.sid && major == s.major;
}
void Student::SetName() {
    sid = "???";
    major = "???";
}
void Student::Print() {
    cout << sid << " " << major;
}
// bool Student::Equals(string str) {
//     return sid == str;
// }



class WorkStudent : public Student {
private:
    string wsname;
public:
    WorkStudent(string sid, string major, string wsname) : Student(sid, major), wsname(wsname) {}
    bool Equals(string);
    void SetName();
    void Print();
    bool operator==(WorkStudent&);
};
bool WorkStudent::operator==(WorkStudent& ws) {
    Student* this_student = dynamic_cast<Student*>(this);
    Student& s = dynamic_cast<Student&>(ws);
    return *this_student == s && wsname == ws.wsname;
}
void WorkStudent::SetName() {
    wsname = "???    "; 
    Student::SetName();
}
void WorkStudent::Print() {
    Student::Print();
    cout << " " << wsname << "\t";
}
bool WorkStudent::Equals(string str) {
    return wsname == str;
}


template <class T>
class Bag {
public:
    virtual int Add(T*); // ���� �ϳ��� bag�� ����
    virtual int Delete(string); //bag���� ���� �ϳ��� ����
    virtual T* Search(string);
    bool IsFull() {return topBag == bagMaxSize;}
    // bag�� ��ȭ�����̸� true, �׷��� ������ false�� ��ȯ
    bool IsEmpty() {return topBag == 0;}
    // bag�� ���� �����̸� true, �׷��� ������ false�� ��ȯ
    // int Top();
    virtual void Print();
protected:
    Bag(int bagSize) : bagMaxSize(bagSize) {
        topBag = 0;
        arr = new T* [bagSize];
    }
    void Full() {cout << "It is full" << endl;} // bag�� ��ȭ������ ���� ��ġ
    void Empty() {cout << "It is empty" << endl;} // bag�� ���� ������ ���� ��ġ

    T** arr; //> �����ڿ��� arr = new T*[Size]; > arr[i] = new T();
    int bagMaxSize; // �迭�� ũ��
    int topBag; // �迭���� ���Ұ� ��� �ִ� ���� ���� ��ġ
    ~Bag() {
        for (int i = 0; i < bagMaxSize; i++) {
            delete arr[i];
        }
        delete[] arr;
    }
};
template <class T>
void Bag<T>::Print() {
    for (int i=0; i<topBag; i++) {
        cout << " | ";
        arr[i]->Print();
    }
    cout << " |" << endl;
}
template <class T>
int Bag<T>::Add(T* x) {
    if (IsFull()) {
        Full();
        return 0;
    }
    arr[topBag] = x;
    topBag++;
    return 1;
}
template <class T>
int Bag<T>::Delete(string str) {
    if (IsEmpty()) {
        Empty();
        return 0;
    }
    int result = 0; //������ ��ü�� ��
    for (int i=0; i<topBag; i++) {
        if (arr[i]->Equals(str)) {
            arr[i]->SetName();
            result++;
        }
    }
    return result;
}
// template <class T>
// int Bag<T>::Top() {
   
// }
template <class T>
T* Bag<T>::Search(string str) {
    for (int i=0; i<bagMaxSize; i++) {
        if (arr[i]->Equals(str)) {
            return arr[i];
        }
    }
    return nullptr;
}



template <class T>
class Set : public Bag<T> {
public:
    Set(int setSize) : Bag<T>(setSize) {}
    int Add(T*);
    int Delete(string);
    void Print();
    T* Search(string);
    bool IsDuplicate(T*);
};
template <class T>
T* Set<T>::Search(string str) {
    return Bag<T>::Search(str);
}
template <class T>
void Set<T>::Print() {
    Bag<T>::Print();
}
template <class T>
bool Set<T>::IsDuplicate(T* p) {
    for (int i=0; i<(this->topBag); i++) { //�� �࿡�� �� ����
        if (*(this->arr[i]) == *p) {
            return true;
        }
    }
    return false;
}
template <class T>
int Set<T>::Add(T* p) {
    if (IsDuplicate(p)) {
        cout << "It is duplicate" << endl;
        return 0; //Bag �� ������ ���� �ʾҴٴ� ��
    } else {
        return Bag<T>::Add(p);
    } 
}
template <class T>
int Set<T>::Delete(string str) {
    return Bag<T>::Delete(str);
}




template <class T>
class RecordSet : public Set<T> {
    int setMaxSize;//5���� ���ڵ� ��
    int topRecordSet;//�ش� ���ڵ弼Ʈ���� �Է��� ��ġ
public:
    RecordSet(int maxSize) : Set<T>(maxSize), setMaxSize(maxSize) {
        topRecordSet = 0;
    }
    T* Search(string);
    void Print();
    int Add(T* p);
};
template <class T>
T* RecordSet<T>::Search(string str) {
    return Set<T>::Search(str);
}
template <class T>
int RecordSet<T>::Add(T* p) {
    if (topRecordSet < setMaxSize) {
        topRecordSet++;
        return Set<T>::Add(p);
    } else {
        topRecordSet = 0;
        topRecordSet++;
        return Set<T>::Add(p);
    }
}
template <class T>
void RecordSet<T>::Print() {
    Set<T>::Print();
}




template <class T>
class RecordTable {
    int tableMaxSize;
    int topRecordTable;
    RecordSet<T>** data;
    int capacity;
    int count;
public:
    RecordTable(int numberSet, int numberRecords) :tableMaxSize(numberSet), capacity(numberRecords) {
        count = 0;
        topRecordTable = 0;
        data = new RecordSet<T>* [numberSet];//10���� set
        for (int i = 0; i < numberSet; i++) {
            data[i] = new RecordSet<T>(numberRecords);//�� set�� 5�� records
        }
    }
    ~RecordTable() {}
    void Add(T*); // ���� �ϳ��� bag�� ����
    int Delete(string);
    T* Search(string);
    void Print();
    bool IsDuplicate(T*);
};
template <class T>
bool RecordTable<T>::IsDuplicate(T* p) { //��ü ���̺��� �ߺ� üũ
    for (int i=0; i<(this->topRecordTable); i++) {
        if (data[i]->Set<T>::IsDuplicate(p)) {
            return true;
        }
    }
    return false;
} 
template <class T>
int RecordTable<T>::Delete(string str) {
    int result = 0; //������ ��ü�� ��
    
    for (int i=0; i<=topRecordTable; i++) {
        result += data[i]->RecordSet<T>::Delete(str);
    }

    return result;

}//bag���� ���� �ϳ��� ����
template <class T>
void RecordTable<T>::Add(T* p) {
    if (IsDuplicate(p)) {
        cout << "It is duplicate in table" << endl;
    } else {
        if (topRecordTable < tableMaxSize) {
            if (count < capacity) {
                if (data[topRecordTable]->RecordSet<T>::Add(p)) count++;
            } else {//�� ���� �� ä���� �� ����
                topRecordTable++;
                count = 0;
                if (data[topRecordTable]->RecordSet<T>::Add(p)) count++;
            }
        }
    }
    
}
template <class T>
void RecordTable<T>::Print() {
    for (int i=0; i<=topRecordTable; i++) {
        data[i]->Print();
    }
}
template <class T>
T* RecordTable<T>::Search(string str) {
    for (int i=0; i<=topRecordTable; i++) {
        if (data[i]->RecordSet<T>::Search(str)) {
            return data[i]->RecordSet<T>::Search(str);
        }
    }
    return nullptr;
}




int main() {
    Employee* members[30]; 
    WorkStudent* workers[20];
    RecordTable<Employee> etable(10, 5);//10���� record sets, �� set�� 5���� records
    RecordTable<WorkStudent> wtable(10, 5);
    int select;
    Employee* e; WorkStudent* ws;
    int result;
    while (1)
    {
        cout << "\n���� 1: member  ��ü 30�� �Է�, 2.table ���, 3: table ��ü ã��,4. table���� ��ü ����, 5. ����" << endl;
        cin >> select;
        switch (select) {
        case 1://table�� ��ü 30�� �Է�
        {
            members[0] = new Employee("p1", "hong", "E1", "Coding");
            members[1] = new Employee("p2", "hong", "E2", "Coding");
            members[2] = new Employee("p3", "kim", "E3", "Test");
            members[3] = new Employee("p4", "lee", "E4", "Test");
            members[4] = new Employee("p5", "ko", "E5", "Design");
            members[5] = new Employee("p6", "cho", "E6", "Production");
            members[6] = new Employee("p7", "hong", "E7", "Sales");
            members[7] = new Employee("p8", "na", "E8", "Sales");
            members[8] = new Employee("p9", "you", "E9", "Account");
            members[9] = new Employee("p10", "song", "E10", "Design");

            workers[0] = new WorkStudent("s011", "coding", "hong");
            workers[1] = new WorkStudent("s012", "coding", "hong");
            workers[2] = new WorkStudent("s013", "coding",  "dong");
            workers[3] = new WorkStudent("s014", "coding",  "fong");
            workers[4] = new WorkStudent("s015", "coding",  "tong");
            workers[5] = new WorkStudent("s016", "coding",  "hong");
            workers[6] = new WorkStudent("s017", "coding",  "mong");
            workers[7] = new WorkStudent("s018", "coding",  "hong");
            workers[8] = new WorkStudent("s019", "coding",  "long");
            workers[9] = new WorkStudent("s020", "coding",  "pong");
            workers[10] = new WorkStudent("s021", "coding",  "lim");
            workers[11] = new WorkStudent("s022", "coding",  "kim");
            workers[12] = new WorkStudent("s023", "coding",  "bim");
            workers[13] = new WorkStudent("s024", "coding",  "dim");
            workers[14] = new WorkStudent("s025", "coding", "rim");
            workers[15] = new WorkStudent("s026", "coding", "qim");
            workers[16] = new WorkStudent("s021", "coding",  "fim");
            workers[17] = new WorkStudent("s021", "coding",  "him");
            workers[18] = new WorkStudent("s027", "coding",  "jim");
            workers[19] = new WorkStudent("s027", "coding",  "jjj");


            for (int i = 0; i < 10; i++) {
                etable.Add(members[i]);
            }
            for (int i = 0; i < 20; i++) {
                wtable.Add(workers[i]);
            }

            break;
        }
        case 2:
            // table�� ��� ��ü ����ϱ�
            //table ������� ����ؾ� �Ѵ�: | *** | ???? | === |���� ����Ѵ�.

            etable.Print();
            wtable.Print();
            break;
        case 3:
            // table���� ��ü ã��
            e = etable.Search("kim");
            if (e == nullptr) cout << "kim�� �������� �ʴ´�" << endl;
            else
                e->Print();
                cout << endl;

            ws = wtable.Search("kim");
            if (ws == nullptr) cout << "kim�� �������� �ʴ´�" << endl;
            else
                ws->Print();
                cout << endl;
            break;
        case 4:
            //table���� ��ü �����ϱ�
            result = etable.Delete("hong");
            if (result > 0)
                cout << "������ records ����" << result << endl;
            result = wtable.Delete("hong");
            if (result > 0)
                cout << "������ records ����" << result << endl;
            break;

        default:
            exit(0);
        }
    }
    system("pause");
    return 1;
}