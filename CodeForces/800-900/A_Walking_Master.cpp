#include <iostream>
using namespace std;

void solve(int a, int b, int c, int d){
    if(d < b){
        cout << -1 << "\n";
        return;
    }

    int diag = d - b;
    int x_after_diag = a + diag;

    if(x_after_diag < c){
        cout << -1 << "\n";
        return;
    }

    int left = x_after_diag - c;
    cout << diag + left << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int t;
    cin >> t;

    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        solve(a, b, c, d);
    }

    return 0;
}