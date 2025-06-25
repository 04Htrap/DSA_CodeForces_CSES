#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
#define ll long long
using namespace std;

void functionName(){
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        unordered_set<int> visited;
        int i;
        for (i = n - 1; i >= 0; --i) {
            if (visited.count(a[i]))
                break;
            visited.insert(a[i]);
        }

        cout << i + 1 << '\n';
    }
    return 0;
}