#include <bits/stdc++.h>
using namespace std;

enum Boolean { FALSE, TRUE};
class Tree;

class TreeNode {            // 트리를 구성하는 atom node 1개
friend class Tree;
friend int equal(TreeNode*, TreeNode*);
private:
    char data;              // 데이터를 담아두는 공간
    TreeNode *LeftChild;    // 왼쪽 Subtree Pointer
    TreeNode *RightChild;

    TreeNode() { LeftChild = RightChild = 0;};
    TreeNode(char ch, TreeNode *Lefty, TreeNode *Righty) {
	            data = ch;
               	LeftChild = Lefty; 	RightChild = Righty;
    } // 새로운 노드를 매어다는 과정
};

class Tree { // 트리 전체룰 나타내는 클래스 -> 이것은 실제 한 TreeNode를 가르키는 포인터
friend int operator==(const Tree&, const Tree&);
private:
    TreeNode *root;
    void inorder   (TreeNode *);         // 트리에 적용할 수 있는 함수 모음
    void preorder  (TreeNode *);
    void postorder (TreeNode *);
    TreeNode* copy (TreeNode *);
public:
    void setup     ();                   // 외부에서 Tree를 조작할 수 있는 함수 모음
    void inorder   ();
    void preorder  ();
    void postorder ();
    Tree(const Tree&);
    Tree           () {root = 0;};
};

void Tree::setup() {                     // 트리를 초기화하는 함수
    root = new TreeNode('R',0,0);
    root->LeftChild = new TreeNode('B',0,0);                  // A의 왼쪽에 B를 매담
    root->RightChild = new TreeNode('W',0,0);                 // A의 오른쪽에 W를 매담
    root->LeftChild->LeftChild = new TreeNode('C', 0, 0);     // B의 왼쪽에 C를 매담
    root->RightChild->LeftChild = new TreeNode('P', 0, 0);     // B의 왼쪽에 C를 매담
    root->LeftChild->RightChild = new TreeNode('D', 0, 0);    // B의 왼쪽에 D를 매담
    root->LeftChild->LeftChild->LeftChild = new TreeNode('E', 0, 0);
    root->LeftChild->LeftChild->RightChild = new TreeNode('X', 0, 0);
	// C의 왼쪽에 E를 매담
} // end of setup( )

void Tree::inorder(){
   inorder(root);
}

void Tree::preorder(){
   preorder(root);
}

void Tree::postorder(){
   postorder(root);
}

void Tree::inorder(TreeNode *CurrentNode){
     if (CurrentNode) {
	 inorder(CurrentNode->LeftChild);
	 cout << CurrentNode->data << " ";
	 inorder(CurrentNode->RightChild);
     }
}

void Tree::preorder(TreeNode *CurrentNode){
     if (CurrentNode) {
	 cout << CurrentNode->data<< " ";
	 preorder(CurrentNode->LeftChild);
	 preorder(CurrentNode->RightChild);
     }
}

void Tree::postorder(TreeNode *CurrentNode){
     if (CurrentNode) {
	 postorder(CurrentNode->LeftChild);
	 postorder(CurrentNode->RightChild);
	 cout << CurrentNode->data<< " ";
     }
}

Tree::Tree(const Tree& s){
  root = copy(s.root);
} // Tree를 새롭게 생성하여 다른 Tree로 보내줌, 복사 생성자

TreeNode* Tree::copy(TreeNode *orignode){
  if (orignode) {
      TreeNode *temp = new TreeNode;
      temp->data = orignode->data;
      temp->LeftChild = copy(orignode->LeftChild);
      temp->RightChild = copy(orignode->RightChild);
      return temp;
  }
  else return 0;
}


int operator==(const Tree& s, const Tree& t){ // Tree의 내용이 같은지를 비교함
   return equal(s.root, t.root);
}

int equal(TreeNode *a, TreeNode *b) { // 실제로 주어진 두 개의 root 노드를 비교
 if ((!a) && (!b)) return 1;          // 둘다 Null 이면 같지롱
 if (a && b &&                        // 만일 둘 다 Pointer이고 , 그 노드의 데이터가 같다면
    (a->data == b->data)
    && equal(a->LeftChild, b->LeftChild)      // 왼 부트리가 같아야하고
    && equal(a->RightChild, b->RightChild) )  // 오른쪽 부트리가 캍을 경우 같게된다.
       return 1;
 return 0;
} // end of equal()

int main() {
	Tree t;                  // t는 Tree 타입의 변수이다.
	t.setup();               // t 에 이것 저것을 마구 쳐 넣는다.
	Tree s = t;              //  t를 새로운 트리  s에 복사해서 넣는다.


	cout << " Tree를 방문해보기 " ;
    cout << "\n Inorder Tree Traversal = " ;
	s.inorder();             // s를 inorder로 찍어본다 ?? 뭐 가 나올까요 ?
	cout << "\n Preorder Tree Traversal = " ;
	s.preorder();             // s를 inorder로 찍어본다 ?? 뭐 가 나올까요 ?
	cout << "\n Postorder Tree Traversal = " ;
	s.postorder();             // s를 inorder로 찍어본다 ?? 뭐 가 나올까요 ?


	cout << "\n\n\n s와 t로 대표되는 Tree가 정말 같은지 비교해 봅시다. " << endl;
	if (s == t) cout << "s == t 입니다. " ;
	else cout << "s != t 인뎁쇼. 같지 않다는 말씀. " ;
	cout << endl;
	// getchar() ;

} // end of main( )
