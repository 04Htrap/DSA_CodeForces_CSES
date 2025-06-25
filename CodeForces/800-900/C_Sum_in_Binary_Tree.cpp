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

void sumOfPath(long long vertex){
    long long sum = 0;
    while(vertex > 0){
        sum = sum + vertex;
        vertex = vertex/2;
    }
    cout << sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        long long vertex;
        cin >> vertex;
        sumOfPath(vertex);
    }

    return 0;
}