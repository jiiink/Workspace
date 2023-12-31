// unordered_multimap::find
// Searches the container for an element with k as key and returns an
// ���� ��� iterator to it if found, otherwise it returns an iterator to unordered_multimap::end
// (the element past the end of the container).

#include <iostream>
#include <string>
#include <unordered_map>

int main () {
    std::unordered_multimap<std::string,std::string> mymap = {

        {"Pusan","��������"},
        {"Pusan","���ű�"},
        {"Kwangju","ȫ��ȸ"},
        {"Seoul","����"},
        {"Jeju","�ٶ�"}
    };

    std::cout << "\n ������ �� of Pusan' is: ";
    std::cout << mymap.find("Pusan")->second;
    std::cout << "\n mymap.size() is " << mymap.size() << std::endl;
    std::cout << std::endl;

    return 0;
}
