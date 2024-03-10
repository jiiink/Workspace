// C++ program to insert a node
// in a BST
#include <bits/stdc++.h>
using namespace std;

// Given Node
struct node {
	int key;
	struct node *left, *right;
};

// Function to create a new BST node
struct node* newNode(int item) {
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

// Function to insert a new node with
// given key in BST
struct node* insert(struct node* node, int key) {
	// If the tree is empty, return a new node
	if (node == NULL) 
		return newNode(key);

	// Otherwise, recur down the tree
	if (key < node->key) {
		node->left = insert(node->left, key);
	} else if (key > node->key) {
		node->right = insert(node->right, key);
	}

	// Return the node pointer
	return node;
}

// Return height of the BST
int height(struct node* node) {
	if (node == NULL)
		return 0;
	else {

		// Compute the depth of each subtree
		int lDepth = height(node->left);
		int rDepth = height(node->right);

		// Use the larger one
		if (lDepth > rDepth)
			return lDepth + 1;
		else
			return rDepth + 1;
	}
}

// Function that returns the node with minimum
// key value found in that tree
struct node* minValueNode(struct node* node) {
	struct node* current = node;

	// Loop down to find the leftmost leaf
	while (current && current->left != NULL)
		current = current->left;
	
	return current;
}

// Function that deletes the key and
// returns the new root
struct node* deleteNode(struct node* root, int key) {
	// base Case
	if (root == NULL)
		return root;

	// If the key to be deleted is
	// smaller than the root's key,
	// then it lies in left subtree
	if (key < root->key) {
		root->left = deleteNode(root->left, key);
	}

	// If the key to be deleted is
	// greater than the root's key,
	// then it lies in right subtree
	else if (key > root->key) {
		root->right = deleteNode(root->right, key);
	}

	// If key is same as root's key,
	// then this is the node
	// to be deleted
	else {
		// Node with only one child
		// or no child
		if (root->left == NULL) {
			struct node* temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL) {
			struct node* temp = root->left;
			free(root);
			return temp;
		}

		/*
			Node with two children:
			Get the inorder successor(smallest
			in the right subtree)
		*/
		struct node* temp = minValueNode(root->right);

		/*
			Copy the inorder successor's
			content to this node
		*/
		root->key = temp->key;

		// Delete the inorder successor
		root->right = deleteNode(root->right, temp->key);
	}
	return root;
}


// Print nodes at a given level
void printGivenLevel(struct node* root, int level) {
	if (root == NULL)
		return;
	if (level == 1) 
		cout << "  " << root->key;
	else if (level > 1) {

		// Recursive Call
		printGivenLevel(root->left, level - 1);
		printGivenLevel(root->right, level - 1);
	}
}

// Function to line by line print
// level order traversal a tree
void printLevelOrder(struct node* root) {
	int h = height(root);
	
	for (int i=1; i<=h; i++) {
		printGivenLevel(root, i);
		cout << endl;
	}
}

// Function to do inorder traversal of BST
void inorder(struct node* root) {
	if (root != NULL) {
		inorder(root->left);
		cout << root->key << " ";
		inorder(root->right);
	}
}

// Function to do preorder traversal of BST
void preorder(struct node* root) {
	if (root != NULL) {
		cout << " " << root->key;
		preorder(root->left);
		preorder(root->right);
	}
}

// Function to do postorder traversal of BST
void postorder(struct node* root) {
	if (root != NULL) {
		preorder(root->left);
		preorder(root->right);
		cout << " " << root->key;
	}
}

// Driver Code
int main() {
	/* Let us create following BST 
              50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80 
   */

  	struct node* root = NULL;

	// Inserting value 50
	root = insert(root, 50);

	// Inserting value 30
	insert(root, 30);

	// Inserting value 20
    insert(root, 20);
 
    // Inserting value 40
    insert(root, 40);
 
    // Inserting value 70
    insert(root, 70);
 
    // Inserting value 60
    insert(root, 60);
 
    // Inserting value 80
    insert(root, 80);

	// Print the BST
	cout << "Inorder" << " : ";
	inorder(root);
	cout << endl;
	cout << "Preorder" << " : ";
	preorder(root);
	cout << endl;
	cout << "Postorder" << " : ";
	postorder(root);

	cout << "\nLevelOrder : \n";
	printLevelOrder(root);

	cout << "After deletion\n";
	deleteNode(root, 70);
	inorder(root);

	return 0;
}
