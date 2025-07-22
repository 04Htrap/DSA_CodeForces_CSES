#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <string>
#include <stack>
#define ll long long
using namespace std;

bool isDifficult(const string &s) {
    return (s.find("FFT") != string::npos || s.find("NTT") != string::npos);
}

void difficultContest(string s){
    if (isDifficult(s)) {
        sort(s.begin(), s.end());
        if (isDifficult(s)) {
            for (int i = 0; i < s.length(); i++) {
                reverse(s.begin(), s.end());
                if (!isDifficult(s)) 
                break;
            }
        }
    }
    cout << s << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        difficultContest(s);
    }

    return 0;
}