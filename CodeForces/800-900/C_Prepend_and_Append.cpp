#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <string>
#include <queue>
#include <stack>
#define ll long long
using namespace std;

void remove_el(int len, string timur_final){
    int left = 0;
    int right = len - 1;

    while(left < right && (timur_final[left] != timur_final[right])){
        left++;
        right--;
    }
      
    cout << right - left + 1 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        int len;
        cin >> len;

        string timur_final;
        cin >> timur_final;

        remove_el(len, timur_final);
    }

    return 0;
}