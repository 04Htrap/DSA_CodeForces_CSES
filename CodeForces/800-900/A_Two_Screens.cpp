 #include <iostream>
 #include <vector>
 #include <algorithm>
 #include <set>
 #include <map>
 #include <cmath>
 using namespace std;

void screens(string &s, string &t){

    int ans = 0;
    int p = 0;
        while(p<s.length() && p<t.length() && s[p]==t[p]){
            p++;
        }
        if(p>0){
            ans = s.length()+t.length()-p+1;
        }
        else ans = s.length()+t.length();
    cout<<ans<<endl;
}

 int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin>>s;
        string t;
        cin>>t;

        screens(s, t);
    }
 }