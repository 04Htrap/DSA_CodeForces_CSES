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
    long long n;
    cin >> n;
    long long cnt0 = 0;
    long long sum = 0;
    vector<long long> element(n);

    for(long long i = 0; i < n; i++){
        cin >> element[i];
        sum += element[i];
        if(element[i] == 0) cnt0++;
    }

    cout << sum + cnt0 << endl;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    long long t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}