#include <iostream>
using namespace std;


void count_non_attacking_knight_placements(int n) {
    for (int k = 1; k <= n; k++) {
        long long total = (long long)k * k * (k * k - 1) / 2;
        long long attacking = 4 * (k - 1) * (k - 2);
        long long result = total - attacking;
        cout << result << endl;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    count_non_attacking_knight_placements(n);
    return 0;
}
