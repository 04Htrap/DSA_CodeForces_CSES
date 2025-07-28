#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt_neg = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] == -1) cnt_neg++;
    }

    int ops = 0;
    int sum = n - 2 * cnt_neg;

    while (sum < 0 || cnt_neg % 2 != 0) {
        cnt_neg--;
        sum += 2;
        ops++;
    }

    cout << ops << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}