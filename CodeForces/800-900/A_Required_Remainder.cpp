#include <iostream>
using namespace std;

void find_max_k(int x, int y, int n) {
    cout << (n - y) / x * x + y << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;
        find_max_k(x, y, n);
    }
    
    return 0;
}