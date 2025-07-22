#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <climits>

using namespace std;

int minSwapsForParade(int n, vector<int>& positions) {
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            unordered_map<int, int> countryCount;
            for (int k = j; k < i; k++) {
                countryCount[positions[k]]++;
            }
            
            int maxCount = 0;
            for (auto& pair : countryCount) {
                maxCount = max(maxCount, pair.second);
            }
            
            int groupSize = i - j;
            int swapsNeeded = groupSize - maxCount;
            
            if (dp[j] != INT_MAX) {
                dp[i] = min(dp[i], dp[j] + swapsNeeded);
            }
        }
    }
    
    return dp[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> positions(n);
    for (int i = 0; i < n; i++) {
        cin >> positions[i];
    }
    
    int result = minSwapsForParade(n, positions);
    cout << result << endl;
    
    return 0;
}