#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

void goodArray(long long n, vector<long long> &goodA, vector<long long> &goodB) {
    sort(goodA.begin(), goodA.end());
    sort(goodB.begin(), goodB.end());

    set<long long> unique_sums;

    for (long long i = 0; i < n; i++) {
        unique_sums.insert(goodA[i] + goodB[i]);
        unique_sums.insert(goodA[i] + goodB[n - i - 1]);
    }

    if (unique_sums.size() >= 3) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> goodA(n);
        vector<long long> goodB(n);

        for (long long i = 0; i < n; i++) cin >> goodA[i];
        for (long long i = 0; i < n; i++) cin >> goodB[i];

        goodArray(n, goodA, goodB);
    }

    return 0;
}
