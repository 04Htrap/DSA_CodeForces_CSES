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

void squareYear(int n){
    int sqroot = ceil(sqrt(n));
    if(sqroot * sqroot == n)
        cout << 0 << " " << sqroot << endl;
    else
        cout << "-1" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        squareYear(n);
    }

    return 0;
}