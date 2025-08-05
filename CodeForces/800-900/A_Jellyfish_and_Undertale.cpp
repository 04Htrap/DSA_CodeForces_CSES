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

void solve(ll a, ll b, ll n, vector<ll>& x){
    ll ans = 0;
    for(ll i = 0; i < n; i++){
      ans += min(a - 1, x[i]);  
    }
    cout << ans + b << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    ll t;
    cin >> t;

    while(t--){
        ll a, b, n;
        cin >> a >> b >> n;

        vector<ll> x(n);
        for(ll i = 0; i < n; i++){
            cin >> x[i];
        }
        solve(a, b, n, x);
    }

    return 0;
}