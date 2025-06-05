#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int n, m;
    cin >> n >> m;

    vector<int> prices(n);
    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int earning = 0;
    for(int i = 0; i < m; i++){
        if (prices[i] < 0) {
            earning += prices[i];
        } else {
            break;
        }
    }

    cout << abs(earning) << endl;

    return 0;
}