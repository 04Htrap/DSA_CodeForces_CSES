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
    vector<int> a(n);
    int cnt = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 != 0) cnt++;
    }

    if(cnt % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
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