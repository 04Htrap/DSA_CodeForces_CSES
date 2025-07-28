#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n); 
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        a[i] = {val, i};
    }

    sort(a.begin(), a.end()); // Sort by a[i] values

    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        b[a[i].second] = i + 1; // Assign smallest available b to smallest a
    }

    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}