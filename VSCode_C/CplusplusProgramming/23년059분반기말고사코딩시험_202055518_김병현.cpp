/*
* Ŭ���� ���, template, ����ó�� ���� - 23.6.13. 059�й� �⸻ �ڵ� ����
*/

#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;
class ExceptionError {
public:
	virtual void Print() = 0;
};
class OverflowException : public ExceptionError {
public:
	void Print() {
		cout << "overflow ���� �߻�" << endl;
	}
};
class RowRecordsOverflowException : public OverflowException {
public:
	void Print() {
		cout << "Row Records overflow ���� �߻�" << endl;
	}
};
class TableRecordsOverflowException : public OverflowException {
public:
	void Print() {
		cout << "Table Records overflow ���� �߻�" << endl;
	}
};
class EmptyException : public ExceptionError {
public:
	void Print() {
		cout << "empty ���� �߻�" << endl;
	}
};
class NotFoundException : public ExceptionError {
public:
	void Print() {
		cout << "Not found  ���� �߻�" << endl;
	}
};
class NotFoundRecordTableException : public NotFoundException {
public:
	void Print() {
		cout << "Not found record table ���� �߻�" << endl;
	}
};
class NotFoundRowRecordsException : public NotFoundException {
public:
	void Print() {
		cout << "Not found record ���� �߻�" << endl;
	}
};
class NotFoundUpdateRecordException : public NotFoundRecordTableException {
public:
	void Print() {
		NotFoundRecordTableException::Print();
		cout << "Not found update ���� �߻�" << endl;
	}
};
class NotFoundDeleteRecordException : public NotFoundRecordTableException {
public:
	void Print() {
		NotFoundRecordTableException::Print();
		cout << "Not found delete ���� �߻�" << endl;
	}
};
class Person {
	string pid;
	string pname;
public:
	Person() {}
	Person(string pid, string pname) :pid(pid), pname(pname) {}
	string Key() {return pid;}
	virtual void Print();
};
void Person::Print() {
	cout << pid << "     " << pname;
}



class Employee : public Person {
private:
	string eno;
	string role;
public:
	Employee() {}
	Employee(string pid, string pname, string eno, string role) :Person(pid, pname), eno(eno), role(role) {}
	virtual void Print();
};

void Employee::Print() {
	Person::Print();
}

class Student {
private:
	string sid;
	string sname;
public:
	Student() {}
	string Key() { return sid; }
	Student(string sid, string sname) : sid(sid), sname(sname) {}
	virtual void Print();
};
void Student::Print() {
	cout << sid << " " << sname;
}



class WorkStudent : public Student {
private:
	string job;
public:
	WorkStudent() {}
	WorkStudent(string sid, string sname, string job) : Student(sid, sname), job(job) {}
	void Print();
};
void WorkStudent::Print() {
	Student::Print();
}
template <class T>
class RowRecords {
public:
	RowRecords() {}
	RowRecords(int maxKeys = 5, int unique = 1);// unique = 1�� �ߺ��� ����
	~RowRecords();
	int Append(string key, T* record);
	int Remove(const string key, T*);
	T* Search(const string key) const;
	void Print(ostream&) const;
	int numKeys()const { return NumKeys; }
	int Find(const string key) const;
	T* GetRecord(int index);
	string GetKey(int index);
	void Update(int index, T* record);
protected:
	int MaxKeys;
	int NumKeys;
	string* Keys;
	T** Records;

	int Init(const int maxKeys, const int unique);
	int Unique; // if true, each key value must be unique

};

template <class T>
RowRecords<T>::RowRecords(int maxKeys, int unique) : NumKeys(0), MaxKeys(maxKeys) {
	Init(MaxKeys, unique);
}
template <class T>
int RowRecords<T>::Init(const int maxKeys, const int unique) {
	Unique = unique != 0;//unique = 1�̸� Unique�� true�̰� �ߺ��� ����
	MaxKeys = maxKeys;
	Records = new T * [MaxKeys]; Keys = new string [MaxKeys];
	return 1;
}
template <class T>
RowRecords<T>::~RowRecords() {
	delete[] Records;
	delete[] Keys;
}

template <class T>
int RowRecords<T>::Append(string key, T* record) {
	int i = NumKeys;
	if (NumKeys != 0)
		int index = Find(key);//current row�� �ߺ������� check
	//if (Unique && index >= 0) return 0; //�־��� key�� �̹� ������
	if (NumKeys == MaxKeys) throw RowRecordsOverflowException();

	Keys[i] = key;
	Records[i] = record;
	NumKeys++;
	return 1;
}
template <class T>
int RowRecords<T>::Remove(const string key, T* record) {
	//�־��� RowRecords�� instance�� key�� �ִ����� ������ �Ŀ� ����
	int index = Find(key);
	if (index < 0) throw NotFoundRowRecordsException(); //key not in index
	//delete Records[index];//test�ÿ� runtime error�� Ȯ���Ѵ�
	for (int i = index; i < NumKeys-1; i++) {
		Keys[i] = Keys[i + 1];
		Records[i] = Records[i + 1];
	}
	NumKeys--;
	return 1;
}

template <class T>
T* RowRecords<T>::Search(const string key) const { //�־��� key�� ���� �ִ� ���ڵ带 �����Ѵ�
	if (NumKeys == 0) {
		throw EmptyException();
	}
	int index = Find(key);
	if (index != -1) return Records[index];
	throw NotFoundRowRecordsException();
}
template <class T>
void RowRecords<T>::Print(ostream& stream) const {
	if (NumKeys == 0) {
		throw EmptyException();
	}
	cout << " | ";
	for (int i = 0; i < NumKeys; i++) {
		// stream << endl; // << "\tKey[" << i << "] " << Keys[i] << " Records = ";
		Records[i]->Print();
		cout << "\t|";
	}
	cout << endl;
}
template <class T>
int RowRecords<T>::Find(string key) const { //RecordTable�� �־��� row�� key�� �ִ����� �����Ѵ�
	if (NumKeys == 0) throw EmptyException();
	for (int i = 0; i < NumKeys; i++) {
		if (Keys[i] == key)
			return i;//�־��� row�� key�� �����ϰ� index�� i ���� �����Ѵ�.
	}
	return -1; //�־��� row�� key�� ����
}
template <class T>
T* RowRecords<T>::GetRecord(int index) {
	return Records[index];
}
template <class T>
string RowRecords<T>::GetKey(int index) {
	return Keys[index];
}
template <class T>
void RowRecords<T>::Update(int index, T* record) {
	Records[index] = record;
}







template <class T>
class RecordTable {
public:
	T* Read(string key);//read by key
	int Append(string key, T* record);
	int Update(string key, T* record);
	int Delete(string key);
	void Print(ostream&) const;
	RecordTable(int maxRecords, int maxKeys);
	~RecordTable();
protected:
	int MaxKeys;
	int MaxRecords;
	int NumRecords;
	RowRecords<T>** data;
};
template <class T>
RecordTable<T>::RecordTable(int maxRecords, int maxKeys) : MaxKeys(maxKeys), MaxRecords(maxRecords) {
	NumRecords = 0;
	data = new RowRecords<T>* [MaxRecords];
	for (int i = 0; i < MaxRecords; i++) {
		data[i] = new RowRecords<T>(MaxKeys);
	}
}
template <class T>
RecordTable<T>::~RecordTable() {
	for (int i = 0; i < MaxRecords; i++) {
		delete data[i];
	}
}
template <class T>
T* RecordTable<T>::Read(string key) {
	for (int i = 0; i <= NumRecords; i++) {
		int result = data[i]->Find(key);//data[i]�� row records�̰� ���⿡ key�� �ִ����� ���� //
		if (result >= 0)
			return data[i]->Search(key);//Search(key)�� ����Ͽ� row records���� �ش� ���ڵ带 �����´�
	}
	throw NotFoundRowRecordsException();
}
template <class T>
int RecordTable<T>::Append(string key, T* record) {	
	int i = NumRecords; //���� �Է��� ��
	//NumRecords�� �ִ� row records�� append�� �� �ִ����� �����Ѵ�.
	if (data[i]->numKeys() == MaxKeys) //data[i] �� �� ��
	{ //�� ���� �� á�� ��
		i = ++NumRecords;
	}

	if (i == MaxRecords) {
		throw TableRecordsOverflowException();
	}
	int result = data[i]->Append(key, record);

	return result;
}
template <class T>
int RecordTable<T>::Update(string key, T* record) {//�־��� key�� ���� record�� ��ü�Ѵ�
	for (int i = 0; i <= NumRecords; i++) {
		int result = data[i]->Find(key);//data[i]�� row records�̰� ���⿡ key�� �ִ����� ����
		if (result >= 0) {//�ٲ۴ٴ� ����..
			data[i]->Update(result, record);
			return 1;
		}
	}
	return 0;
}
template <class T>
int RecordTable<T>::Delete(string key) {
	int deletedRowIndex = 0;
	T* recordWillBeMoved = nullptr;
	string keyWillBeMoved;
	int position = 0;

	for (int i=0; i<=NumRecords; i++) {
		position = data[i]->Find(key);
		if (position >= 0) {
			data[i]->Remove(key, data[i]->Search(key));
			deletedRowIndex = i;
		}
	}
	for (int i=deletedRowIndex; i<NumRecords-deletedRowIndex; i++) {
		recordWillBeMoved = data[i+1]->GetRecord(0);
		keyWillBeMoved = data[i+1]->GetKey(0);
		data[i]->Append(keyWillBeMoved, recordWillBeMoved);
		data[i+1]->Remove(keyWillBeMoved, recordWillBeMoved);
	}


	return 0;
}

template <class T>
void RecordTable<T>::Print(ostream& os) const {
	for (int i=0; i<=NumRecords; i++) {
		data[i]->Print(os);
	}

}

int main() {
	Person* members[30];
	Student* workers[20];
	RecordTable<Person> etable(10, 5);//10���� record sets, �� set�� 5���� records
	RecordTable<Student> wtable(10, 5);	
	string key;
	int select;
	Person* p; Student* s;
	int result;
	Person* pNew = new Employee("p1", "hongdada", "E111", "CPP Coding");
	Student* sNew = new WorkStudent("s026", "Bang", "��������");
	while (1)
	{
		cout << "\n���� 1: ��ü �Է�, 2.table ���, 3: table ã��,4. table ��ü ����, 5. ��ü ����, 6. ����" << endl;
		cin >> select;
		switch (select) {
		case 1://table�� ��ü 30�� �Է�
		{
			members[0] = new Employee("p1", "hong", "E1", "Coding");
			members[1] = new Employee("p2", "hee", "E2", "Coding");
			members[2] = new Employee("p3", "kim", "E3", "Test");
			members[3] = new Employee("p4", "lee", "E4", "Test");
			members[4] = new Employee("p5", "ko", "E5", "Design");
			members[5] = new Employee("p6", "choi", "E6", "Design");
			members[6] = new Employee("p7", "han", "E7", "Sales");
			members[7] = new Employee("p8", "na", "E8", "Sales");
			members[8] = new Employee("p9", "you", "E9", "Account");
			members[9] = new Employee("p10", "song", "E10", "Production");

			workers[0] = new WorkStudent("s011", "hong", "sales");
			workers[1] = new WorkStudent("s012", "ong", "designer");
			workers[2] = new WorkStudent("s013", "dong", "sales");
			workers[3] = new WorkStudent("s014", "fong", "ȸ��");
			workers[4] = new WorkStudent("s015", "tong", "����");
			workers[5] = new WorkStudent("s016", "nong", "designer");
			workers[6] = new WorkStudent("s017", "mong", "ȸ��");
			workers[7] = new WorkStudent("s018", "kong", "sales");
			workers[8] = new WorkStudent("s019", "long", "����");
			workers[9] = new WorkStudent("s020", "pong", "ȸ��");
			workers[10] = new WorkStudent("s021", "lim", "����");
			workers[11] = new WorkStudent("s022", "mim", "designer");
			workers[12] = new WorkStudent("s023", "bim", "sales");
			workers[13] = new WorkStudent("s024", "dim", "designer");
			workers[14] = new WorkStudent("s025", "rim", "ȸ��");
			workers[15] = new WorkStudent("s026", "qim", "����");
			workers[16] = new WorkStudent("s027", "fim", "sales");
			workers[17] = new WorkStudent("s028", "him", "ȸ��");
			workers[18] = new WorkStudent("s029", "jim", "����");
			workers[19] = new WorkStudent("s030", "jjj", "designer");
		}
			try {
				for (int i = 0; i < 10; i++)
				{
					key = members[i]->Key();
					etable.Append(key, members[i]);

				}
				for (int i = 0; i < 20; i++)
				{
					key = workers[i]->Key();
					wtable.Append(key, workers[i]);

				}
			}
			catch (TableRecordsOverflowException& error) { 
				error.Print();
			}
			break;
		case 2:
			// table�� ��� ��ü ����ϱ�
			//table ������� ����ؾ� �Ѵ�: | *** | ???? | === |���� ����Ѵ�.
			try {
				etable.Print(cout);
				wtable.Print(cout);
			}
			catch (EmptyException& error) {
				error.Print();
			}
			break;
		case 3:
			// table���� ��ü ã��
			try {
				try {
					p = etable.Read("p5");
					p->Print();
					cout << endl;
					s = wtable.Read("s027");
					s->Print();
				} catch (NotFoundRowRecordsException& error) {
					error.Print();
				}
			}
			catch (EmptyException& error) {
				error.Print();
			}
			break;
		case 4:
			//table���� ��ü �����ϱ�
			try {
				result = etable.Delete("p1");
				result = wtable.Delete("s011");
			}
			catch (EmptyException& error) {
				error.Print();
			}
			break;
		case 5:
			try {
				result = etable.Update("p9", pNew);
				result = wtable.Update("s026", sNew);
			}
			catch (EmptyException& error) {
				error.Print();
			}
			break;
		default:
			exit(0);

		}
	}
	system("pause");
	return 1;
}