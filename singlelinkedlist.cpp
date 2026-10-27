/// You are given a linked list of  integers
///Find the value of its middle node.
/// for odd  it is the exact middle
/// for even  it is the second of the two middle nodes.

#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;

    Node(int x) {
        value = x;
        next = nullptr;
    }
};

int main() {
    int n;
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        Node* node = new Node(x);

        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << slow->value << '\n';

    return 0;
}