#include <iostream>
using namespace std;

int count_extremely_round(int n) {
    int count = 0;
    for (int d = 1; d <= 9; ++d) {
        int num = d;
        while (num <= n) {
            count++;
            num *= 10;
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << count_extremely_round(n) << '\n';
    }

    return 0;
}