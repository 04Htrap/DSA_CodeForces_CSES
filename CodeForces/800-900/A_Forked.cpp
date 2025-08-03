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

void solve(int a, int b, int xk, int yk, int xq, int yq){
    int dx[] = {1, 1, -1, -1};
    int dy[] = {1, -1, 1, -1};

    set<pair<int, int>> stk, stq;

    for(int i = 0; i < 4; i++){
        stk.insert({xk + a * dx[i], yk + b * dy[i]});
        stk.insert({xk + b * dx[i], yk + a * dy[i]});

        stq.insert({xq + a * dx[i], yq + b * dy[i]});
        stq.insert({xq + b * dx[i], yq + a * dy[i]});
    }

    int ans = 0;
    for (auto x : stk) {
        if (stq.count(x)) ans++;
    }

    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        int xk, yk;
        cin >> xk >> yk;

        int xq, yq;
        cin >> xq >> yq;

        solve(a, b, xk, yk, xq, yq);
    }

    return 0;
}