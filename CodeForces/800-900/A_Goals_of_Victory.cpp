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


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> goals(n);
        int sum = 0;
        for(int i = 0; i < n - 1; i++){
            cin >> goals[i];
            sum += goals[i];
        }

        cout << sum * -1 << endl;
    }

    return 0;
}