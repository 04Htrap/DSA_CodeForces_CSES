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
    vector<int> arr(n);

    set<int> unique;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        unique.insert(arr[i]);
    }
    if(unique.size() <= 2) cout << "YES" << endl;
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