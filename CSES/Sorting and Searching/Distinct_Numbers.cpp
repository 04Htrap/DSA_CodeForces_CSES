#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> values(n);
    for(int i = 0; i < n; i++){
        cin >> values[i];
    }

    sort(values.begin(), values.end());

    int distinct = 1;
    for (int i = 1; i < n; i++) {
        if (values[i] != values[i - 1]) {
            distinct++;
        }
    }

    cout << distinct << endl;

    return 0;
}
