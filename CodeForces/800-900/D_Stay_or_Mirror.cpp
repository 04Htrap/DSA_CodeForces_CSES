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

void functionName() {
    int n, ans = 0;
    cin >> n;
    vector<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];

    for(int i = 0; i < n; i++) {
        int left = 0, right = 0;
        for(int j = 0; j < i; j++) 
            if(p[j] > p[i]) left++;
        for(int j = i + 1; j < n; j++) 
            if(p[j] > p[i]) right++;
        ans += min(left, right);
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--) {
        functionName();
    }

    return 0;
}