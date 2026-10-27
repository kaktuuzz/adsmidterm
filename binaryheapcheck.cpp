///check that given list is min heap

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n / 2; i++) {
        if (a[i] > a[2 * i + 1] || (2 * i + 2 < n && a[i] > a[2 * i + 2])) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}