#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
using namespace std;

void missing(vector<int> &nos, long long n, long long sum){
    long long expected = (n*(n+1))/2;
    long long missing;
    missing = expected - sum;

    cout << missing << endl;
}

int main(){
    long long n;
    cin >> n;

    long long sum = 0;

    vector<int> nos(n);
    for(int i = 0; i < n -1; i++){
        cin >> nos[i];
        sum += nos[i];
    }
    missing(nos, n, sum);
}