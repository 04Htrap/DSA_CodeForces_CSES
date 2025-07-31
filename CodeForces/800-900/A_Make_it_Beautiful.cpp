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

void solve(int n, vector<int>& arr){
    sort(arr.begin(), arr.end());
    int max_no = arr[n - 1];
    int min_no = arr[0];

    if(min_no == max_no){
        cout << "NO" << endl;
        return;
    }
    else{
        cout << "YES" << endl;
        cout << max_no << " ";
        for(int i = 0; i < n - 1; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        solve(n, arr);
    }

    return 0;
}