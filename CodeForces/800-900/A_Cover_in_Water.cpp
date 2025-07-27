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

void minActions(int n, string s){
    int dotCount = 0;
    bool hasTripDots = false;
    for(int i = 0; i < n; i++){
        if(s[i] == '.') dotCount++;
        if(s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.') hasTripDots = true;
    }

    if(hasTripDots == true) cout << 2 << endl;
    else cout << dotCount << endl; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s; // # blocked .
        minActions(n ,s);
    }

    return 0;
}