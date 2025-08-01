#include <iostream>
#include <vector>
using namespace std;

void solve(int n, vector<int>& elements) {
    int operations = 0;
    int count = 1;

    for (int i = 1; i < n; i++) {
        if ((elements[i] % 2) == (elements[i - 1] % 2)) {
            count++;
        } else {
            operations += (count - 1);
            count = 1; 
        }
    }
    operations += (count - 1);

    cout << operations << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> elements(n);
        for (int i = 0; i < n; ++i) {
            cin >> elements[i];
        }
        solve(n, elements);
    }

    return 0;
}