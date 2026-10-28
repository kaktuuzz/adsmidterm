///check that given list is min heap

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (is_heap(a.begin(), a.end(), greater<int>()))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}