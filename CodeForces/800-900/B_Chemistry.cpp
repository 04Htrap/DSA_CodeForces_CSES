#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
#include <unordered_map>
#define ll long long
using namespace std;

void solve(int n, int k, string s){
    unordered_map<char, int> cnt;

    for(char c : s){
        cnt[c]++;
    }

    int odd_count = 0;
    for(auto p : cnt){
        if(p.second % 2 == 1) odd_count++;
    }

    if(odd_count <= k + 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        int n, k;
        string s;
        cin >> n >> k >> s;
        solve(n, k, s);
    }

    return 0;
}