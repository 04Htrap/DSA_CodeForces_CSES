#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
#include <unordered_set>
#define ll long long
using namespace std;

void ICPC_Balloons(string s, int n){
    unordered_set<char> solved;
    int balloons = 0;

    for(char ch : s){
        if(solved.find(ch) == solved.end()){
            balloons += 2;
            solved.insert(ch);
        }
        else{
            balloons++;
        }
    }
    cout << balloons << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;
        ICPC_Balloons(s, n);
    }

    return 0;
}