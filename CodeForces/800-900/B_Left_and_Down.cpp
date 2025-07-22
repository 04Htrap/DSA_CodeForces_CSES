#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <queue>
#include <stack>
#define ll long long
using namespace std;

void solve() {
    long long a, b, k;
    cin >> a >> b >> k;

    long long g = gcd(a, b);
    long long need = max((a + k - 1) / k, (b + k - 1) / k);

    cout << (g >= need ? 1 : 2) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}