#include <iostream>
using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long anna = a + (c + 1) / 2;
    long long katie = b + c / 2;

    if (anna > katie)
        cout << "First" << endl;
    else
        cout << "Second" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}