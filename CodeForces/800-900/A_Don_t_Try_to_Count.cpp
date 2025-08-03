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

bool is_substring(string s, string x) {
    int n = s.size(), m = x.size();
    for(int i = 0; i <= n - m; i++) {
        bool match = true;
        for(int j = 0; j < m; j++) {
            if(s[i + j] != x[j]) {
                match = false;
                break;
            }
        }
        if(match) return true;
    }
    return false;
}

void solve(){
    int n, m;
    cin >> n >> m;

    string x, s;
    cin >> x >> s;

    string x0 = x;
    string x1 = x0 + x0;
    string x2 = x1 + x1;
    string x3 = x2 + x2;
    string x4 = x3 + x3;
    string x5 = x4 + x4;

    if(is_substring(x0, s)) cout << 0 << endl;
    else if(is_substring(x1, s)) cout << 1 << endl;
    else if(is_substring(x2, s)) cout << 2 << endl;
    else if(is_substring(x3, s)) cout << 3 << endl;
    else if(is_substring(x4, s)) cout << 4 << endl;
    else if(is_substring(x5, s)) cout << 5 << endl;
    else cout << -1 << endl;
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