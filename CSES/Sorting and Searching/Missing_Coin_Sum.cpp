#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long findSmallest(int n, vector<int>& coins) {
    sort(coins.begin(), coins.end());
    
    long long smallest_unachievable = 1;
    for (int i = 0; i < n; i++) {
        if (coins[i] > smallest_unachievable) {
            break;
        }
        smallest_unachievable += coins[i];
    }
    
    return smallest_unachievable;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    
    cout << findSmallest(n, coins) << endl;
    return 0;
}