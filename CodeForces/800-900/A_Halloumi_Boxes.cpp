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

void isOrdered(int n, int k, vector<int>& boxes){
    if(is_sorted(boxes.begin(), boxes.end()) || k > 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> boxes(n);
        for(int i = 0; i < n; i++){
            cin >> boxes[i];
        }

        isOrdered(n, k, boxes);
    }

    return 0;
}