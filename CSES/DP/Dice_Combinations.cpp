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
const int MOD = 1e9 + 7;

void dice_combination(int n){
    vector<int> dp(n+1 , 0);
    dp[0] = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if(i - j >= 0){
                dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
    }
    cout << dp[n] << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int n;
    cin >> n;

    dice_combination(n);

    return 0;
}