#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        long long h;
        cin >> n >> h;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        sort(a.begin(), a.end());
        long long x = a[n - 1];
        long long y = a[n - 2];

        long long full_cycles = h / (x + y);
        long long remaining = h % (x + y);

        long long moves;
        if (remaining == 0)
            moves = 2 * full_cycles;
        else if (remaining <= x)
            moves = 2 * full_cycles + 1;
        else
            moves = 2 * full_cycles + 2;

        cout << moves << endl;
    }
    return 0;
}