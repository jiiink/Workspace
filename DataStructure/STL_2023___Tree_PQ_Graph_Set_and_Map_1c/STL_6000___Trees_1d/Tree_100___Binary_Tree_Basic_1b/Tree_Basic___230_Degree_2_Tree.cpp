#include <bits/stdc++.h>
using namespace std;

struct Binary_tree{
    int data;
    Binary_tree* left;
    Binary_tree* right;
};

int main() {

    Binary_tree* root  = new Binary_tree;     // ��带 ����ϴ�.
    Binary_tree* five  = new Binary_tree;
    Binary_tree* eight = new Binary_tree;

    root-> data = 3;       //Set data
    five-> data = 5;
    eight->data = 8;

    root->left  = eight;   // root�� ���ʿ� "8"�� �Ŵ�ϴ�.
    root->right = five;

    five->left  = NULL;
    five->right = NULL;


    eight->left  = nullptr;   // c++ 11������ nullptr�� ����� �� �ֽ�,
    eight->right = nullptr;

}  // end of main()


