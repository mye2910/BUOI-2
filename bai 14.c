#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void insert(Node* &root, int data) {
    if (root == NULL) {
        root = createNode(data);
        return;
    }
    if (data < root->data) {
        insert(root->left, data);
    } else {
        insert(root->right, data);
    }
}
void inOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
int main() {
    Node* root = NULL;
    insert(root, 56);
    insert(root, 34);
    insert(root, 26);
    insert(root, 45);
    insert(root, 77);
    insert(root, 68);
    insert(root, 86);
    cout << "Cay nhi phan sau khi duoc them cac phan tu: ";
    inOrder(root);
    return 0;
}