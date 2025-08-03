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

void solve(ll n, ll k, ll x){

    ll max_possible_sum = ((n * (n + 1)) / 2) - ((n - k) * (n - k + 1) / 2);
    ll min_possible_sum = (k * (k + 1)) / 2;
    if(x <= max_possible_sum && x >= min_possible_sum){
        cout << "YES" << endl;
    }
    
    else cout << "NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    ll t;
    cin >> t;

    while(t--){
        ll n, k ,x;
        cin >> n >> k >> x;
        solve(n, k, x);
    }

    return 0;
}