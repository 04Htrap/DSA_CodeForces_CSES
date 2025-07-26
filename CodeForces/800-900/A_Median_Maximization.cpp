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

void maxMedian(int n, int s){
    int m = n / 2 + 1;
    cout << s / m << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        int n, s;
        cin >> n >> s;
        maxMedian(n, s);
    }

    return 0;
}