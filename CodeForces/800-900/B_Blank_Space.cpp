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
    int blank_count =0 ;
    int zero_count = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 0) zero_count++;
        else{
            blank_count = max(zero_count, blank_count);
            zero_count = 0;
        }
    }
    cout << max(zero_count, blank_count) << endl;
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