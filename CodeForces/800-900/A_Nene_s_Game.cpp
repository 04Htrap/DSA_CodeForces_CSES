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

void winnerCount(){
    int k, q;
    cin >> k >> q;
    vector<int> kick(k + 1);
    for(int i = 1; i <= k; i++){
        cin >> kick[i];
    }
    int n;
    for(int i = 1; i <= q; i++){
        cin >> n;
        cout << min(kick[1] - 1, n) << " ";
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        winnerCount();
    }

    return 0;
}