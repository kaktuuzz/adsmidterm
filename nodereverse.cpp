#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
};

int main() {
    int n;
    cin >> n;

    Node* head = nullptr;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        Node* p = new Node{x, head};
        head = p;
    }

    Node* prev = nullptr;
    Node* cur = head;

    while (cur != nullptr) {
        Node* next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }

    head = prev;

    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }

    return 0;
}