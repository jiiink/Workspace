// C++ program to insert a node in AVL tree
#include<bits/stdc++.h>
using namespace std;

// An AVL tree node
class Node {
    public:
        int key;
        Node *left;
        Node *right;
        int height;
};

// A utility function to get the height of the tree
int height(Node *N) {
    if (N == NULL)
        return 0;
    return N->height;
}

// A function to get maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

/*
    Helper function that allocates
    a new node with the given key and
    NULL left and right pointers.
*/
Node* newNode(int key) {
    Node* node = new Node();
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1; // new node is initially added at leaf

    return node;
}

/*
    A function to right rotate subtree
    rooted with y
        y           x
       / \         / \
      x  T3   ->  T1  y
    /  \             / \
   T1  T2          T2  T3

    keys(T1) < key(x) < keys(T2) < key(y) < keys(T3)
*/
Node* rightRotate(Node* y) { // right rotate 를 하면, T2 위치를 바꿔주게 되는데,
    Node* x = y->left;
    Node* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;  // x < T2 < y 라서 이렇게 하는 거임

    // Update heights
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    // Return new root
    return x;
}

Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    // Return new root
    return y;
}

// Get Balance factor of node N
int getBalance(Node* N) {
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}

/*
    Recursive function to insert a key
    in the subtree rooted with node and
    returns the new root of the subtree.
*/
Node* insert(Node* node, int key) {
    // 1. Perform the normal BST insertion
    if (node == NULL)
        return (newNode(key)); // 

    if (key < node->key)
        node->left = insert(node->left, key); // line 99 
    else if (key > node->key)
        node->right = insert(node->right, key);
    else // Equal keys are not allowed in BST
        return node;

    // 2. Update height of this ancestor node.
    node->height = 1 + max(height(node->left), height(node->right));

    // 3. Get the balance factor of this ancestor node 
    // to check whether this node became unblanced.
    int balance = getBalance(node);

    // If this node becomes unbalanced, then there are 4 cases

    // Left Left Case
    /*
            x
           /
          x2
         /
        x3
    */
    if (balance > 1 && key < node->left->key) {
        return rightRotate(node);
    }

    // Right Right Case
    if (balance < -1 && key > node->right->key) {
        return leftRotate(node);
    }

    // Left Right Case
    if (balance > 1 && key > node->left->key) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    // return the (unchanged) node pointer.
    return node;
}

/*
    Given a non-empty binary search tree,
    return the node with minimum key value
    found in that tree. Note that the entire tree
    does not need to be searched.
*/

void preOrder(Node* root) {
    if (root != NULL) {
        cout << root->key << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}


// Driver Code
int main() {
    Node* root = NULL;

    root = insert(root, 10); // after insertion, assign newly root into the root.
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);
    /* The constructed AVL Tree would be  
                30  
               / \  
              20 40  
             / \   \  
            10 25  50  
    */

    cout << "Preorder traversal of the "
            "constructed AVL tree is \n";
    preOrder(root);

    return 0;
}
