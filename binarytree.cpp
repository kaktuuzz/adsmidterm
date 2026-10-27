///binary search tree (insertion, recursive height).
///Build a binary search tree by inserting the given  numbers
/// it goes to the left subtree of a node if it is smaller than the node’s value, and to the right subtree otherwise.
///Find the height of the tree — the number of nodes on the longest path
///from the root to a leaf. A tree of a single node has height

#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int x) {
        value = x;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root, int x) {
    if (root == nullptr) {
        return new Node(x);
    }

    if (x < root->value) {
        root->left = insert(root->left, x);
    } else {
        root->right = insert(root->right, x);
    }

    return root;
}

int height(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return 1 + max(leftHeight, rightHeight);
}

int main() {
    int n;
    cin >> n;

    Node* root = nullptr;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        root = insert(root, x);
    }

    cout << height(root) << '\n';

    return 0;
}