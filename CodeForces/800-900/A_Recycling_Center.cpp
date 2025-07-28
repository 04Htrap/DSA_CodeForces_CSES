#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(long long n, long long c) {
    vector<long long> a(n);
    for (long long i = 0; i < n; ++i) cin >> a[i];

    long long coins = 0;
    vector<long long> trash(a.begin(), a.end());

    while (true) {
        long long position = -1;
        long long maxFree = -1;

        for (long long i = 0; i < trash.size(); i++) {
            if (trash[i] <= c && trash[i] > maxFree) {
                maxFree = trash[i];
                position = i;
            }
        }

        if (position == -1) break;

        trash.erase(trash.begin() + position); 
        for (long long i = 0; i < trash.size(); i++) {
            trash[i] *= 2;
        }
    }

    cout << trash.size() << endl;
}

int main() {
    long long t; cin >> t;
    while (t--) {
        long long n, c;
        cin >> n >> c;
        solve(n, c);
    }
    return 0;
}