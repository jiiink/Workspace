#include <bits/stdc++.h>
using namespace std;

// ��Ƕ� singly linked list

struct tree{
    string word;
    tree* next;
};

int main() {

    tree* root = new tree;  // ��� �����
    tree* by = new tree;
    tree* cmp = new tree;

    root->word = "hello";   //Set data
    by->word = "by";
    cmp->word = "cmp";


    root->next = by;      // ��� �Ŵޱ�
    by->next = cmp;
    cmp->next = nullptr;


}

