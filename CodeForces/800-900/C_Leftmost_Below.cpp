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

void solve(){
    int n;
    cin >> n;
    bool ans = true;
    int smallest = INT_MAX;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        smallest = min(smallest, x);
        if(x >= 2*smallest) ans = false;
    }
    if(ans) cout << "YES" << endl;
    else cout <<"NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}