 #include <iostream>
 #include <vector>
 #include <algorithm>
 #include <set>
 #include <map>
 #include <cmath>
 #include <queue>
 #include <stack>
 using namespace std;
 #define ll long long
 
 void collecting_numbers(ll n, vector<ll> &numbers){
    
    vector<ll> positions(n);
    ll round = 1;

    for(int i = 0; i < n; i++){
        positions[numbers[i]] = i;
    }

    for(int i = 1; i <= n; i++){
        if(positions[i] < positions[i-1]) round++;
    }

    cout << round << endl;
 }
 
 int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> numbers(n);
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
    }
 
    collecting_numbers(n, numbers);
 
    return 0;
 }