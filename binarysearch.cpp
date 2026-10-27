// find times when element has appeared

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;

        int l = lower_bound(a.begin(), a.end(), x) - a.begin();
        int r = upper_bound(a.begin(), a.end(), x) - a.begin();

        cout << r - l << '\n';
    }

    return 0;
}
