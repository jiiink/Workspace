#include <bits/stdc++.h>
using namespace std;


map<string, vector<string> > funcs;
stack<string> funcStack;


void printS() {
    auto copy = funcStack;
    stack<string> for_print;
    while (!copy.empty()) {
        for_print.push(copy.top());
        copy.pop();
    } 
    while (!for_print.empty()) {
        cout << for_print.top() << " ";
        for_print.pop();
    }
    cout << endl;
    cout << "----------------\n";
}

void printQ() {
    for (auto& f : funcs) {
        cout << f.first << " : ";
        // vector<string> copy = f.second;
        // while (!copy.empty()) {
        //     cout << copy.front() << " ";
        //     copy.pop();
        // }
        // cout << endl;
        for (auto& s : f.second) {
            cout << s << " ";
        }
        cout << endl;
        // cout << key << " : ";

    }
    cout << "-------------\n";
}

void input() {
    int n, k1, k2;
    cin >> n >> k1 >> k2;

    while (n--) {
        vector<string> func;
        // map<string, queue<string> > func;
        string statement = "";
        string key;
        cin >> key;
        while (true) {
            cin >> statement;
            if (statement == "$") break;
            func.push_back(statement);
        }
        funcs[key] = func;
    }

}

void process(vector<string> q) {
    // cout << "in process\n";
    // while (!q.empty()) {
    //     if (q.front() >= "A" && q.front() <= "Z") {
    //         funcStack.push(q.front());
    //         // auto it = funcs.find(q.front());
    //         process(funcs[q.front()]);
    //         // for (auto& f : funcs) {
    //         //     if (f.first == q.front()) {
    //         //         process(f);
    //         //     }
    //         // }
    //         q.pop();
    //     } else {
    //         q.pop();
    //     }
    // }
    for (auto& s : q) {
        if (s >= "A" && s <= "Z") {
            funcStack.push(s);
            // if (funcStack.size() > 100) {
            //     cout << "DEADLOCK\n";
            //     return;
            // }
            printS();
            process(funcs[s]);
        }
    }
    funcStack.pop();

    printS();

    
}

void output() {

}


int main() {
    input();
    printQ();


    funcStack.push("M");
    printS();
    process(funcs["M"]);
    // funcStack.pop();
    // printS();
    
    output();
    return 0;
}