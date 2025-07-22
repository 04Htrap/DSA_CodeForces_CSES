#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> sushi(n);
    for (int i = 0; i < n; ++i)
        cin >> sushi[i];

    int prev_count = 0;
    int cur_count = 1;
    int max_len = 0;

    for (int i = 1; i < n; ++i) {
        if (sushi[i] == sushi[i - 1]) {
            cur_count++;
        } else {
            max_len = max(max_len, 2 * min(prev_count, cur_count));
            prev_count = cur_count;
            cur_count = 1;
        }
    }

    max_len = max(max_len, 2 * min(prev_count, cur_count));

    cout << max_len << endl;
    return 0;
}