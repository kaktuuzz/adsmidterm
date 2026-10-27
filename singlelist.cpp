/// delete given node

#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

int main() {
    int n;
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        Node* p = new Node{x, nullptr};

        if (head == nullptr) {
            head = p;
            tail = p;
        } else {
            tail->next = p;
            tail = p;
        }
    }

    int x;
    cin >> x;

    while (head != nullptr && head->value == x) {
        Node* p = head;
        head = head->next;
        delete p;
    }

    Node* p = head;

    while (p != nullptr && p->next != nullptr) {
        if (p->next->value == x) {
            Node* q = p->next;
            p->next = q->next;
            delete q;
        } else {
            p = p->next;
        }
    }

    p = head;

    while (p != nullptr) {
        cout << p->value << " ";
        p = p->next;
    }

    return 0;
}