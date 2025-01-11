#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> coins(n);
    int sum_total = 0;

    for(int i = 0; i < n; i++){
        cin >> coins[i];
        sum_total += coins[i];
    }

    int coin_sum = 0, coin_count = 0;

    sort(coins.rbegin(), coins.rend());

    for(int i =0; i < n; i++){
        coin_sum += coins[i];
        coin_count++;

        if(coin_sum > sum_total / 2){
            break;
        }
    }

    cout << coin_count << endl;

    return 0;

}