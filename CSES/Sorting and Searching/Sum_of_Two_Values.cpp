#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<pair<int, int> > values(n);
    for(int i = 0; i < n; i++){
        cin >> values[i].first;
        values[i].second = i+1;
    }

    sort(values.begin(), values.end());

    int left = 0, right = n - 1;

    while (left < right) {
        int sum = values[left].first + values[right].first;

        if (sum == x) {
            cout << values[right].second << " " << values[left].second << endl;
            return 0;
        }

        if (sum < x) {
            left++;
        } else {
            right--;
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}