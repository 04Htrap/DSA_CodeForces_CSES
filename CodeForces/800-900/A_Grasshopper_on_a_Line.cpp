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
    int x, k;
    cin >> x >> k;

    if(x % k != 0){
        cout << 1 << endl;
        cout << x << endl;
    }
    else{
        cout << 2 << endl;
        cout << 1 << " " << x - 1 << endl;
    }
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