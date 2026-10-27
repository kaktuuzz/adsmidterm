/// priority queue
/// max element on top
#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    priority_queue<int> pq;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (s == "add") {
            int x;
            cin >> x;
            pq.push(x);
        } else {
            cout << pq.top() << '\n';
            pq.pop();
        }
    }

    return 0;
}
