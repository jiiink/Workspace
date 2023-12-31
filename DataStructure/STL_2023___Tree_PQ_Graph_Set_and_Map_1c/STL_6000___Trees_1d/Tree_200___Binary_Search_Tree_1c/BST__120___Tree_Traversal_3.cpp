#include <bits/stdc++.h>
using namespace std;

enum Boolean { FALSE, TRUE};
class Tree;

class TreeNode {            // Ʈ���� �����ϴ� atom node 1��
friend class Tree;
friend int equal(TreeNode*, TreeNode*);
private:
    char data;              // �����͸� ��Ƶδ� ����
    TreeNode *LeftChild;    // ���� Subtree Pointer
    TreeNode *RightChild;

    TreeNode() { LeftChild = RightChild = 0;};
    TreeNode(char ch, TreeNode *Lefty, TreeNode *Righty) {
	            data = ch;
               	LeftChild = Lefty; 	RightChild = Righty;
    } // ���ο� ��带 �ž�ٴ� ����
};

class Tree { // Ʈ�� ��ü�� ��Ÿ���� Ŭ���� -> �̰��� ���� �� TreeNode�� ����Ű�� ������
friend int operator==(const Tree&, const Tree&);
private:
    TreeNode *root;
    void inorder   (TreeNode *);         // Ʈ���� ������ �� �ִ� �Լ� ����
    void preorder  (TreeNode *);
    void postorder (TreeNode *);
    TreeNode* copy (TreeNode *);
public:
    void setup     ();                   // �ܺο��� Tree�� ������ �� �ִ� �Լ� ����
    void inorder   ();
    void preorder  ();
    void postorder ();
    Tree(const Tree&);
    Tree           () {root = 0;};
};

void Tree::setup() {                     // Ʈ���� �ʱ�ȭ�ϴ� �Լ�
    root = new TreeNode('R',0,0);
    root->LeftChild = new TreeNode('B',0,0);                  // A�� ���ʿ� B�� �Ŵ�
    root->RightChild = new TreeNode('W',0,0);                 // A�� �����ʿ� W�� �Ŵ�
    root->LeftChild->LeftChild = new TreeNode('C', 0, 0);     // B�� ���ʿ� C�� �Ŵ�
    root->RightChild->LeftChild = new TreeNode('P', 0, 0);     // B�� ���ʿ� C�� �Ŵ�
    root->LeftChild->RightChild = new TreeNode('D', 0, 0);    // B�� ���ʿ� D�� �Ŵ�
    root->LeftChild->LeftChild->LeftChild = new TreeNode('E', 0, 0);
    root->LeftChild->LeftChild->RightChild = new TreeNode('X', 0, 0);
	// C�� ���ʿ� E�� �Ŵ�
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
} // Tree�� ���Ӱ� �����Ͽ� �ٸ� Tree�� ������, ���� ������

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


int operator==(const Tree& s, const Tree& t){ // Tree�� ������ �������� ����
   return equal(s.root, t.root);
}

int equal(TreeNode *a, TreeNode *b) { // ������ �־��� �� ���� root ��带 ��
 if ((!a) && (!b)) return 1;          // �Ѵ� Null �̸� ������
 if (a && b &&                        // ���� �� �� Pointer�̰� , �� ����� �����Ͱ� ���ٸ�
    (a->data == b->data)
    && equal(a->LeftChild, b->LeftChild)      // �� ��Ʈ���� ���ƾ��ϰ�
    && equal(a->RightChild, b->RightChild) )  // ������ ��Ʈ���� ���� ��� ���Եȴ�.
       return 1;
 return 0;
} // end of equal()

int main() {
	Tree t;                  // t�� Tree Ÿ���� �����̴�.
	t.setup();               // t �� �̰� ������ ���� �� �ִ´�.
	Tree s = t;              //  t�� ���ο� Ʈ��  s�� �����ؼ� �ִ´�.


	cout << " Tree�� �湮�غ��� " ;
    cout << "\n Inorder Tree Traversal = " ;
	s.inorder();             // s�� inorder�� ���� ?? �� �� ���ñ�� ?
	cout << "\n Preorder Tree Traversal = " ;
	s.preorder();             // s�� inorder�� ���� ?? �� �� ���ñ�� ?
	cout << "\n Postorder Tree Traversal = " ;
	s.postorder();             // s�� inorder�� ���� ?? �� �� ���ñ�� ?


	cout << "\n\n\n s�� t�� ��ǥ�Ǵ� Tree�� ���� ������ ���� ���ô�. " << endl;
	if (s == t) cout << "s == t �Դϴ�. " ;
	else cout << "s != t �ε���. ���� �ʴٴ� ����. " ;
	cout << endl;
	// getchar() ;

} // end of main( )
