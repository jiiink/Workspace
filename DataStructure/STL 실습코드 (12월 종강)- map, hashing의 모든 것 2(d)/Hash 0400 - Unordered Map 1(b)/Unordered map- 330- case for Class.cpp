#include <bits/stdc++.h>
#include <unordered_map>

class Student {
  public:
    Student(int kor, int eng, int math) : m_kor(kor), m_eng(eng), m_math(math) {
        m_avg = (m_kor + m_eng + m_math) / 3;
    }
    bool operator<(const Student& other) const { // const�� �ٿ����Ѵ�.
        return this->m_avg > other.m_avg; // ��������
    }
    bool operator==(const Student& other) const // const�� �ٿ����Ѵ�.
    {
        // key�浹�� ������ m_kor
        if (other.m_kor == this->m_kor)
            return true;
        return false;
    }
  public:
    int m_kor;
    int m_eng;
    int m_math;
    int m_avg;
};

// C++ǥ�� Ŭ����(����ü)�� Ư��ȭ �ϱ����� namespace std�ȿ��� ���־�� ��.
namespace std {
//���ø� Ư��ȭ ���
//hash<����� ���� �ڷ���> ��Ģ�� ����� �Ѵ�.
template <>
struct hash<Student> {
    // ()������ �����ε�.
    size_t operator()(const Student& student) const { // const �� �� �ٿ��� �Ѵ�.
        // �ſ� ������ �ؽ� �Լ�.
        return student.m_avg - student.m_avg - 1;
    }
};
}


int main() {
    // �⺻���� ���� ���.
    std::unordered_map<Student, int> uMap2;

    std::pair<std::unordered_map<Student, int>::iterator, bool> iter3 =
        uMap2.insert(std::make_pair(Student(10, 20, 30), 10));

    return 0;
}
