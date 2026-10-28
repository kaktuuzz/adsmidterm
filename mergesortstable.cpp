#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int grade;
};

int main() {
    int n;
    cin >> n;

    vector<Student> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i].name >> a[i].grade;

    stable_sort(a.begin(), a.end(), [](Student x, Student y) {
        return x.grade < y.grade;
    });

    for (int i = 0; i < n; i++)
        cout << a[i].name << '\n';

    return 0;
}

///==================================================================================================

#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    int grade;
};

void merge(vector<Student>& a, int l, int m, int r) {
    vector<Student> b;
    int i = l, j = m + 1;

    while (i <= m && j <= r) {
        if (a[i].grade <= a[j].grade)
            b.push_back(a[i++]);
        else
            b.push_back(a[j++]);
    }

    while (i <= m) b.push_back(a[i++]);
    while (j <= r) b.push_back(a[j++]);

    for (int k = 0; k < b.size(); k++)
        a[l + k] = b[k];
}

void mergeSort(vector<Student>& a, int l, int r) {
    if (l >= r) return;

    int m = (l + r) / 2;

    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
}

int main() {
    int n;
    cin >> n;

    vector<Student> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i].name >> a[i].grade;

    mergeSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << a[i].name << '\n';

    return 0;
}