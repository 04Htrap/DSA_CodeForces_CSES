#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
#define ll long long
using namespace std;

void solve(long long n) {
    long long cnt2 = 0, cnt3 = 0;

    while(n % 2 == 0) {
        n /= 2;
        cnt2++;
    }
    while(n % 3 == 0) {
        n /= 3;
        cnt3++;
    }

    if(n == 1 && cnt2 <= cnt3) {
        cout << (cnt3 - cnt2) + cnt3 << '\n';
    } else {
        cout << -1 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        solve(n);
    }

    return 0;
}