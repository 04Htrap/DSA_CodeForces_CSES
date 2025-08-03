#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        freq[x]++;
    }

    if (freq.size() > 2) {
        cout << "No\n";
        return;
    }

    if (freq.size() == 1) {
        cout << "Yes\n";
        return;
    }

    // size == 2
    int f1 = freq.begin()->second;
    int f2 = freq.rbegin()->second;

    if ((n % 2 == 0 && f1 == f2) || (n % 2 == 1 && abs(f1 - f2) == 1))
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}