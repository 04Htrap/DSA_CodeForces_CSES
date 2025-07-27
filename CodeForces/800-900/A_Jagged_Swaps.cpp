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

void isSorted(int n, vector<int>& perm){
    if(perm[0] == 1){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        int n; 
        cin >> n;
        vector<int> perm(n);
        for(int i = 0; i < n; i++){
            cin >> perm[i];
        }
        isSorted(n , perm);
    }

    return 0;
}