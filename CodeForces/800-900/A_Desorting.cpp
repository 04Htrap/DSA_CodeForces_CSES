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

void deSort(){
    int n;
    cin >> n;
    vector<int> nums(n);
    int diff = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        if(i > 0){
            diff = min(diff, nums[i] - nums[i - 1]);
        }
    }
    if(!is_sorted(nums.begin(), nums.end())) cout << 0 << endl;
    else cout << diff/ 2 + 1 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
       deSort(); 
    }

    return 0;
}