///lomuto algo

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int p = a[n - 1];
    int i = -1;

    for (int j = 0; j < n - 1; j++) {
        if (a[j] < p) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[n - 1]);

    for (int j = 0; j < n; j++) {
        cout << a[j] << " ";
    }

    return 0;
}