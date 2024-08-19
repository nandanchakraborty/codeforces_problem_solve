#include <iostream>
using namespace std;

struct node {
    int key;
    struct node *left, *right;
};


struct node *newNode(int item) {

    struct node *temp = new node ();
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}


void inorder(struct node *root) {
    if (root != NULL) {

        inorder(root->left);
        cout << root->key << " -> ";


        inorder(root->right);
    }
}

void Preorder(struct node* root) {
    if (root == NULL)
        return;
    cout << root->key << " -> ";
    Preorder(root->left);
    Preorder(root->right);

}

void Postorder(struct node* root) {
    if (root == NULL)
        return;


    Postorder(root->left);

    Postorder(root->right);

    cout << root->key << " -> ";
}



struct node *insert(struct node *node, int key) {

    if (node == NULL) return newNode(key);


    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);

    return node;
}


struct node *minValueNode(struct node *node) {
    struct node *current = node;


    while (current && current->left != NULL)
        current = current->left;

    return current;
}



int main() {
    struct node *root = NULL;
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 7);
    root = insert(root, 0);
    root = insert(root, 4);
    root = insert(root, 9);

    cout << "Inorder traversal: ";
    inorder(root);
    cout<<endl;
    cout<<endl;
    cout << "Preorder traversal: ";
    Preorder(root);
    cout<<endl;
    cout<<endl;
    cout << "postorder traversal: ";
    Postorder(root);
    cout<<endl;
    cout<<endl;
}

