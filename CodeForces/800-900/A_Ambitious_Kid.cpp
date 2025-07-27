#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    bool hasZero = false;
    int absmin = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) hasZero = true;
        else absmin = min(absmin, abs(a[i]));
    }

    if (hasZero) cout << 0 << endl;
    else cout << absmin << endl;

    return 0;
}