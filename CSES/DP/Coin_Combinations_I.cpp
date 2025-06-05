#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
#include <climits>
#define ll long long
using namespace std;
const int MOD = 1e9 + 7;

void minimizing_coin(int n, int x, vector<int> &coins){
    if(x < 0){
        cout << 0 << endl;
        return;
    }

    vector<int> dp(x + 1, 0);
    dp[0] = 1;
    for(int i = 1; i <= x; i++){
        for(auto c : coins){
            if(i - c >= 0){
                dp[i] = (dp[i] + dp[i - c]) % MOD;
            }
        }
    }
    cout << dp[x] << endl;
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for(int i = 0; i < n; i++)
        cin >> coins[i];

    minimizing_coin(n, x, coins);
    return 0;
}