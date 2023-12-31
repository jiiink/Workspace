#include <bits/stdc++.h>
using namespace std;

struct mycmp{ // ���� ������ �켱���� �Լ�
    bool operator()( string t, string u){
        cout << "\n" << t.back() << " vs. " << u.back() ;
        return t.back() < u.back();  // ������ ���ڷ� ����
    }
};


int main(){ // priority_queue
	string words[10]= {"Summer", "Time", "Kill","BeerBox", "C++",
	                   "YouTube", "���ɸ�", "010-5678","��","GoodBoy" };

	priority_queue< string , vector<string>,  mycmp > Strpq( words, words+9);


	while(!Strpq.empty()){
		cout <<  "\n " << Strpq.top();
		Strpq.pop();
	}
	return 0;
} // end of main()


