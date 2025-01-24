#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<string> results;
    
    while(t--){
        int n;
        cin >> n;
        long long total = 0;

        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            total += a;
        }

        long long root = sqrt(total);
        if (root * root == total) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }          
    }
    for (int i = 0; i < results.size(); i++) {
        cout << results[i] << endl;
    }
    return 0;
}