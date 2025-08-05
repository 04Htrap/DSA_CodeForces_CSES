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

void solve(ll n, ll k, vector<ll>& nums){
    ll pointer = n * k;
    ll sum = 0;
    
    while(k--){
        pointer = pointer - (n/2 + 1);
        sum = sum + nums[pointer];
    }
    cout << sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    ll t;
    cin >> t;

    while(t--){
       ll n, k;
       cin >> n >> k;
       vector<ll> nums(n * k);
       for(int i = 0; i< n*k; i++) cin >> nums[i];
       solve(n, k, nums); 
    }

    return 0;
}