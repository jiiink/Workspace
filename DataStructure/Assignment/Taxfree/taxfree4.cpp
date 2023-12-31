#include <iostream>
#include <stack>
#include <set>
#include <vector>
using namespace std;
// score 91
// score 2?

set<int> items;
int K;
int total = 0;
stack<int> shoppingList;
vector< stack<int> > completeList;
vector< vector<int> > completeVector;
int maxIndex = 0;

void input() {
    int N;
    cin >> N >> K;
    while (N--) {
        int item;
        cin >> item;
        items.insert(item);
    }
}



void totalSum(stack<int> items) {
    total = 0;
    auto temp = items;
    while (!temp.empty()) {
        total += temp.top();
        temp.pop();
    }
}

void process(set<int> items) {
    for (auto& item : items) {
        auto copy = items;
        
        shoppingList.push(item);
        totalSum(shoppingList);

        if (total == K) {
            completeList.push_back(shoppingList);
            shoppingList.pop();
        } else if (total < K) {
            auto copy_of_copy = copy;
            for (auto& i : copy_of_copy) {
                if (i < item) {
                    copy.erase(i);
                }
            }
            
            process(copy);
        } else if (total > K) {
            shoppingList.pop();
            // printS(shoppingList);
        }
    }
    if (shoppingList.empty()) {
        return;
    } else {
        shoppingList.pop();
    }
    // printS(shoppingList);
}



void output(int index) {
    if (completeList.empty()) {
        cout << "0\n";
        return;
    } 
    // for (eteList[index]);
    stack<int> s;
    while (!completeList[index].empty()) {
        // p();
        s.push(completeList[index].top());
        completeList[index].pop();
    }
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}

void findMaxStack() {
    for (auto& c : completeList) {
        vector<int> v;
        auto copy = c;
        while (!copy.empty()) {
            v.push_back(copy.top());
            copy.pop();
        }
        completeVector.push_back(v);
    }


    int maxV = 0;
    for (int i=0; i<completeVector.size(); i++) {
        if (completeVector[i].front() > maxV) {
            maxV = completeVector[i].front();
            maxIndex = i;
        } else if (completeVector[i].front() == maxV) {
            if (completeVector[maxIndex][completeVector[maxIndex].size()-2] > completeVector[i][completeVector[i].size()-2]) {
                maxIndex = maxIndex;
            } else {
                maxIndex = i;
            }
        }
    }
    // output(index);
}






int main() {
    input();

    process(items);
    findMaxStack();
    output(maxIndex);
}