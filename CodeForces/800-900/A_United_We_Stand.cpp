#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> input(n);
    for (int i = 0; i < n; ++i) {
        cin >> input[i];
    }

    sort(input.begin(), input.end());

    if (input[0] == input[n - 1]) {
        cout << "-1\n";
        return;
    }

    int index = 0;
    while (input[index] == input[0]) {
        index++;
    }

    cout << index << " " << n - index << "\n";

    for (int i = 0; i < index; ++i) {
        cout << input[i] << " ";
    }

    cout << "\n";

    for (int i = index; i < n; ++i) {
        cout << input[i] << " ";
    }

    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}