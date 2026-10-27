/// queue operations

#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> q;

    for (int i = 0; i < n; i++) {
        string op;
        cin >> op;

        if (op == "push") {
            int x;
            cin >> x;
            q.push(x);
        } else {
            cout << q.front() << "\n";
            q.pop();
        }
    }

    return 0;
}


///================================================================================================

#include <iostream>
#include <string>
using namespace std;

struct Queue {
    int a[100005];
    int front = 0, rear = 0;

    void push(int x) {
        a[rear] = x;
        rear++;
    }

    int pop() {
        int x = a[front];
        front++;
        return x;
    }
};

int main() {
    int n;
    cin >> n;

    Queue q;

    for (int i = 0; i < n; i++) {
        string op;
        cin >> op;

        if (op == "push") {
            int x;
            cin >> x;
            q.push(x);
        } else {
            cout << q.pop() << "\n";
        }
    }

    return 0;
}