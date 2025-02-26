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

void love_story(string s){
    string orignal = "codeforces";
    int count = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] != orignal[i]) count++;
    }
    cout << count << endl;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        love_story(s);
    }

    return 0;
}