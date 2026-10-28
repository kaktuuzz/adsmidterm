#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    int p = a[n - 1];

    auto it = partition(a.begin(), a.end() - 1,
                        [p](int x) { return x < p; });

    swap(*it, a[n - 1]);

    for (int x : a)
        cout << x << " ";

    return 0;
}