#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;

        int l = 0, r = n;

        while (l < r) {
            int m = (l + r) / 2;

            if (a[m] < x)
                l = m + 1;
            else
                r = m;
        }

        if (l == n)
            cout << -1 << '\n';
        else
            cout << l + 1 << '\n';
    }

    return 0;
}