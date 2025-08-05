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

void solve(string s){
    int cnt0 = 0, cnt1 = 0;
    for (char c : s) {
        if (c == '0') cnt0++;
        else if (c == '1') cnt1++;
    }

    int min_pairs = min(cnt0, cnt1);
    if (min_pairs % 2 == 1)
        cout << "DA" << endl;
    else
        cout << "NET" << endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        solve(s);
    }

    return 0;
}