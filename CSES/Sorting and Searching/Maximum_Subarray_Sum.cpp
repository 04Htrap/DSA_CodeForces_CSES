#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long maxSubarraySum(int n, vector<long long>& values){

    long long sum = 0, maxi = values[0];
    for(int i = 0; i < n; i++){
        sum = sum + values[i];
        
        maxi = max(maxi, sum);
        if (sum < 0)
            sum = 0;
    }
    return maxi;
}

int main(){

    int n;
    cin >> n;

    vector<long long> values(n);
    for(int i = 0; i < n; i++){
        cin >> values[i];
    }

    long long maxi = maxSubarraySum(n, values);
    cout << maxi << endl;
    return 0;
}