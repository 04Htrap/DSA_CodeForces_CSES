#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> app(n);
    vector<int> apt(m);

    for (int i = 0; i < n; i++) {
        cin >> app[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> apt[i];
    }

    sort(app.begin(), app.end());
    sort(apt.begin(), apt.end());

    int i = 0, j = 0, count = 0;

    while (i < n && j < m) {
        if (abs(app[i] - apt[j]) <= k) {
            count++;
            i++;
            j++;
        } else if (apt[j] < app[i] - k)
            j++;
        else
            i++;
    }

    cout << count << endl;

    return 0;
}