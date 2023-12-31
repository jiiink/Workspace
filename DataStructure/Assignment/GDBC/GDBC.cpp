#include <bits/stdc++.h>
using namespace std;
#define allout(x) for (auto i : x) cout << i << " ";
using DNA_FORM = set<int, greater<>>;

multimap< DNA_FORM, int> GDBC;

vector<vector<int>> responses;
void query(DNA_FORM request) {
    vector<int> response;
    for (auto& DNA : GDBC) {
        if (DNA.first == request) response.push_back(DNA.second);
    }
    
    sort(response.begin(), response.end(), [] (int i, int j) {
        return i > j;
    });
    responses.push_back(response);
}

void input() {
    string line;
    
    while (getline(cin, line)) {
        if (line == "$") break;
        istringstream iss(line);
        DNA_FORM DNA;
        char mode;
        int value;
        iss >> mode;
        if (mode == 'R') {
            while (iss >> value && value > 0) DNA.insert(value);
            GDBC.insert(pair<DNA_FORM, int>(DNA, value));
        }
        if (mode == 'Q') {
            while (iss >> value && value != 0) DNA.insert(value);
            query(DNA);
        }
    }
}

int main() {
    input();

    for_each(responses.begin(), responses.end(), [] (vector<int> response) {
        if (response.empty()) cout << "\nNone";
        else allout(response);
        cout << endl;
    });
    return 0;
}