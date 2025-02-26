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

void good_array(int n, vector<int>& arr){
    int even = 0;
    int odd = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 != arr[i] % 2){
            if(i % 2 == 0) even++;
            else odd++;
        }
    }

    if(even == odd) cout << even << endl;
    else cout << -1 << endl;
    
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
        good_array(n ,arr);
    }

    return 0;
}