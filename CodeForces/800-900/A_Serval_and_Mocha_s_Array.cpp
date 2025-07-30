#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        bool beautiful = false;
        for (int i = 0; i < n && !beautiful; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (gcd(a[i], a[j]) <= 2) {
                    beautiful = true;
                    break;
                }
            }
        }

        cout << (beautiful ? "YES" : "NO") << endl;
    }

    return 0;
}