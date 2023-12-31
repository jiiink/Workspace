// � ������ �ֹ��޾� �̰��� ó�����ִ� ���α׷��� ť�� ����� ����.
#include <fstream>
#include <string.h>
#include <string>
#include <queue>
#include <iostream>
using namespace std;

class order{
public:
	string customer;
	int timeCost;
	order(string rc, int rt){			// ���ڸ� �޾Ƶ鿩�� ����ϱ� ���� ������
		customer = rc;
		timeCost = rt;
	}
};

class catfood{
public:
	string category;
	int timeCost;
	catfood(){;}
	catfood(const catfood& rhs){				// ���� ������ ���� ���: const Ÿ���� ���۷����� �Ķ���ͷ� �޾Ƽ� ó��
		category = rhs.category;
		timeCost = rhs.timeCost;
	}
	catfood(string rc, int rt){
		category = rc;
		timeCost = rt;
	}
};

ostream& operator<<(ostream& os, queue<order> orq){
    while(!orq.empty()){
        os << orq.front().customer << ' ' << orq.front().timeCost << endl;
        orq.pop();
    }
}
catfood food_category(string food);

int main(){
	queue <order> orders;
	ifstream fin("orders.inp");
	string customer,food;
	catfood foodCate;

	while(!fin.eof()){
		fin>>food>>customer;							// ������ �б�
		foodCate = food_category(food);
		cout << food <<  " by " << customer << "\n";
		orders.push(order(customer,foodCate.timeCost));		// QUEUE�� ������ ����
	} // end of while( )
	cout << "�ֹ��� ���� = " << orders.size() ;
	return 0;
} // end of main( )

catfood food_category(string food){
	string  menus[] = { "bibim" , "kimchi", "kimbab", "zzigae" ,
				    	 "zzazang", "mandu", "zzamppong" ,
				     	 "udong", "sushi" , "donburi"};
	int		timecost[] = {	7, 3, 8, 13,  \
	                        8, 2, 22,  \
	          				4, 10, 12 };
	int i;
	int arraySize = sizeof(menus)/sizeof(menus[0]);		// ���� �迭 ũ�� ���ϱ�
	for(i = 0 ; i < arraySize; i++){
		if(menus[i] == food){
			break;
		}
	}
	return catfood( menus[i], timecost[i]);
} // end of catfood food_category(string food)
