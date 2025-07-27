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

void solve(int n, vector<int>& b){
    vector<int> a;
    a.push_back(b[0]);
    for(int i = 1; i < n; i++){
        if(b[i] >= b[i-1]) a.push_back(b[i]);
    
        else{
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }
    cout << a.size() << endl;
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> b(n);
        for(int i = 0; i < n; i++) cin >> b[i];
        solve(n, b);
    }

    return 0;
}