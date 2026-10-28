/// merge sort, merge procedure (two pointers).
/// You are given two arrays sorted in non-decreasing order
/// Print all distinct values that occur in at least one of them
///in increasing order
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m), c(n + m);

    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());

    c.erase(unique(c.begin(), c.end()), c.end());

    for (int x : c)
        cout << x << " ";

    return 0;
}


/// ==================================================================================================================


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int& x : a) cin >> x;
    for (int& x : b) cin >> x;

    int i = 0, j = 0;
    int last = 0;
    bool first = true;

    while (i < n || j < m) {
        int x;

        if (i == n) x = b[j++];
        else if (j == m) x = a[i++]; 
        else if (a[i] < b[j]) x = a[i++];
        else if (a[i] > b[j]) x = b[j++];
        else {    
            x = a[i];
            i++;
            j++;}
        
        if (first || x != last) {
            cout << x << " ";
            last = x;
            first = false;
        }
    }

    return 0;
}