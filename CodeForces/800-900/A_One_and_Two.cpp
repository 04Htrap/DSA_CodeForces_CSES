#include <iostream>
#include <vector>
using namespace std;

void check_split(int n, vector<int>& arr) {
    int total_twos = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 2) total_twos++;
    }

    int left_twos = 0;
    for (int k = 0; k < n - 1; ++k) {
        if (arr[k] == 2) left_twos++;
        int right_twos = total_twos - left_twos;

        if (left_twos == right_twos) {
            cout << k + 1 << endl;
            return;
        }
    }

    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        check_split(n, arr);
    }
}