/// find GCD and LCM
#include <iostream>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    if (cin >> a >> b) {
        long long g = std::gcd(a, b);
        long long l = std::lcm(a, b);
        
        cout << g << " " << l << "\n";
    }

    return 0;
}

///-----------------------------------------------------------

#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}

long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    if (cin >> a >> b) {
        long long g = gcd(a, b);
        long long l = lcm(a, b);

        cout << g << " " << l << "\n";
    }

    return 0;
}