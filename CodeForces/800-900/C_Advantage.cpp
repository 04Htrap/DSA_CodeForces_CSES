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

void weightAdvantage(int n, vector<int>& weights) {
    vector<int> sorted_weights = weights;
    sort(sorted_weights.begin(), sorted_weights.end());

    int maxi = sorted_weights[n - 1];
    int maxi2 = sorted_weights[n - 2];

    for (int i = 0; i < n; i++) {
        if (weights[i] != maxi) {
            cout << weights[i] - maxi << " ";
        } else {
            cout << weights[i] - maxi2 << " ";
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> weights(n);
        for (int i = 0; i < n; i++) {
            cin >> weights[i];
        }

        weightAdvantage(n, weights);
    }

    return 0;
}