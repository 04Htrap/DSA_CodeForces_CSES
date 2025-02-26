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
    int x = 0;

    while(t--){
        string s;
        cin >> s;
        if (s == "++X" || s == "X++") x++;
        else x--;
    }
    cout << x << endl;


    return 0;
}