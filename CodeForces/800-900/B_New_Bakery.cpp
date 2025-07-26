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

void maxProf(ll n, ll a, ll b){
    if(b <= a){
        cout << n * a << endl;
        return;
    }

    ll k = min(n, b-a);
    ll prof = (b*(b+1)/2) - (b-k)*(b-k+1)/2;
    

    prof += (a*(n - k));
    cout << prof << endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    ll t;
    cin >> t;

    while(t--){
        ll n, a, b;
        cin >> n >> a >> b;
        maxProf(n, a, b);
    }

    return 0;
}