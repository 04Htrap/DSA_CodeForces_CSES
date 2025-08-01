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
    int n, s;
    cin >> n >> s;
    int sum = 0;

    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
        if(arr[i] == 0) cnt0++;
        if(arr[i] == 1) cnt1++;
        if(arr[i] == 2) cnt2++;
    }
    int diff = s - sum;
    if(diff < 0){
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
    else if(diff == 1){
        for(int i = 0; i < cnt0; i++){
            cout << 0 <<" ";
        }
        for(int i = 0; i < cnt2; i++){
            cout << 2 <<" ";
        }
        for(int i = 0; i < cnt1; i++){
            cout << 1 <<" ";
        }
        cout << endl;
        return;

    }
    else{
        cout << -1 << endl;
        return;
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