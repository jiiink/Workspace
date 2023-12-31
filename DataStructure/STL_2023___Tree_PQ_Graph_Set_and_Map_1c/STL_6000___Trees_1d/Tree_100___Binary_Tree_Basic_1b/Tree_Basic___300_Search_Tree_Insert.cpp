/*
    Binary Search Tree���� �� ���Ҹ� �ش� ��ġ�� ã�Ƽ�
   insert( ) �մϴ�. ���ؼ� ����, Ȥ�� ������...
   leaf�� �����ϸ� �׶� �Ŵ�ϴ�.

*/
#include <bits/stdc++.h>
using namespace std;

struct bst {
    int data;
    int leftIdx;
    int rightIdx;
    };

void Make_Root( vector <struct bst > &v1, int aData) {
    struct bst b1 { aData, -1, -1 };  // child�� ������ -1�� ǥ��. ������ �� ��ġ index
    v1.push_back(b1);
}

// v1���� ǥ�õ� tree node�� left pointer��
void setleft(vector < struct bst > &v1, int currIndex, int aData) {
    unsigned int leftIndex = v1.size();  // ���Ե� ��ġ vector index
    v1[currIndex].leftIdx = leftIndex;
    struct bst b1 = { aData, -1, -1 };
    v1.push_back(b1);     // ���� �ڿ� v1�� left node ���Ҹ� ����
}

void setright( vector<struct bst > &v1, int currIndex, int aData) {
    unsigned int rightIndex = v1.size();
    v1[currIndex].rightIdx = rightIndex;
    struct bst b1 = { aData, -1, -1 };
    v1.push_back(b1);
}

void Insert(vector <struct bst> &v1, int aData) {
    if(v1.size() == 0)     {
        cout<<"Noter�� ���� ����� ���� �ʾ���. MakeNode first..."<<endl;
        return;         }
    int currentIdx = 0;
    while ( currentIdx < v1.size() ) {
        if(aData <= v1[currentIdx].data) {  // ���ϴ� �ڸ��� ã�Ƶ�.
            if( v1[currentIdx].leftIdx == -1)   { 
                setleft(v1, currentIdx, aData);
                break;                 }
            else currentIdx = v1[currentIdx].leftIdx;
            }
        else { // ���� ũ�� ����������
            if(v1[currentIdx].rightIdx == -1) {
                setright(v1, currentIdx, aData);
                break;
                }
            else
                currentIdx = v1[currentIdx].rightIdx;
            }
        }
}  // end of Insert( )


void InTrav(vector <struct bst> &v1, unsigned int Idx) {
    if(v1[Idx].leftIdx != -1)
        InTrav(v1,v1[Idx].leftIdx );
    cout<< " " << v1[Idx].data ;
    if( v1[Idx].rightIdx != -1)
        InTrav(v1, v1[Idx].rightIdx);
}

void PreTrav(vector <struct bst> &v1, unsigned int Idx) {
    cout<< " " << v1[Idx].data ;
    if(v1[Idx].leftIdx != -1)
        PreTrav(v1,v1[Idx].leftIdx );
    if( v1[Idx].rightIdx != -1)
        PreTrav(v1, v1[Idx].rightIdx);
}

void PostTrav(vector <struct bst> &v1, unsigned int Idx) {
    if(v1[Idx].leftIdx != -1)
        PostTrav(v1,v1[Idx].leftIdx );
    if( v1[Idx].rightIdx != -1)
        PostTrav(v1, v1[Idx].rightIdx);
    cout<< " " << v1[Idx].data ;
}

int main() {
    vector <struct bst> v1;

    Make_Root(v1, 30);
    Insert(v1, 20);
    Insert(v1, 6);
    Insert(v1, 40);
    Insert(v1, 35);
    Insert(v1, 16);
    Insert(v1, 7);
    Insert(v1, 56);
    Insert(v1, 27);

    cout << "\n Inorder: " ;
    InTrav (v1, 0);
    cout << "\n Preorder: " ;
    PreTrav(v1,0);
    cout << "\n Postorder: " ;
    PostTrav(v1,0);
    return 0;
}
