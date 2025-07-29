#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        bool ok = false;
        for (int x = 0; x < 2; ++x) {
            long long rem = n - x * k;
            if (rem >= 0 && rem % 2 == 0) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}