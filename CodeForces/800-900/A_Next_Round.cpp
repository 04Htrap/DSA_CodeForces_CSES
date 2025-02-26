#include <iostream>
using namespace std;

int main() {
    int n, k, count = 0;
    cin >> n >> k;

    int scores[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int thresh = scores[k - 1];

    for (int i = 0; i < n; i++) {
        if (scores[i] >= thresh && scores[i] > 0) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}