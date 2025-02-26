 #include <iostream>
 #include <vector>
 #include <algorithm>
 #include <set>
 #include <map>
 #include <cmath>
 using namespace std;

void journey(int n, int a, int b, int c){
    int total = a+b+c;
    int cycle = n/total;
    int cycle_dist = cycle * total;

    int rem = n - cycle_dist;
    if(rem <= 0)
        cout << cycle*3 << endl;
    else if(rem <= a)
        cout << cycle*3 + 1 << endl;
    else if(rem <= a+b)
        cout << cycle*3 + 2 << endl;
    else
        cout << cycle*3 + 3 << endl;
    
}

 int main(){
    int t;
    cin >> t;

    int n,a,b,c;
    while(t--){
        cin >> n >> a >> b >> c;
        journey(n,a,b,c);
    }
    return 0;
 }