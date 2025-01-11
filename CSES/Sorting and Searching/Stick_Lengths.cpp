#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long minimumCost(int n, vector<int>& sticks) {
    sort(sticks.begin(), sticks.end());
    
    int median = sticks[n / 2];
    
    long long cost = 0;
    for (int i = 0; i < n; i++) {
        cost += abs(sticks[i] - median);
    }
    
    return cost;
}

int main() {
    int n;
    cin >> n;
    vector<int> sticks(n);
    for (int i = 0; i < n; i++) {
        cin >> sticks[i];
    }
    
    cout << minimumCost(n, sticks) << endl;
    return 0;
}