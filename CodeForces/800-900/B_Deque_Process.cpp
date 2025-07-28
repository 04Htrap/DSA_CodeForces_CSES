#include <iostream>
#include <deque>
using namespace std;

void solve() {
    int n;
    cin >> n;
    deque<int> d;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        d.push_back(x);
    }

    bool smol = true;
    while (!d.empty()) {
        if (smol) {
            if (d.front() < d.back()) {
                cout << "L";
                d.pop_front();
            } else {
                cout << "R";
                d.pop_back();
            }
        } else {
            if (d.front() > d.back()) {
                cout << "L";
                d.pop_front();
            } else {
                cout << "R";
                d.pop_back();
            }
        }
        smol = !smol;
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cmath>
// #include <queue>
// #include <stack>
// #define ll long long
// using namespace std;

// bool bad_seq(vector<int>& check_seq) {
//     int n = check_seq.size();
//     if (n <= 4) return false;

//     bool is_inc = true;
//     bool is_dec = true;
//     for (int i = 0; i < n - 1; i++) {
//         if (check_seq[i] >= check_seq[i + 1]) is_inc = false;
//         if (check_seq[i] <= check_seq[i + 1]) is_dec = false;
//     }
//     return is_inc || is_dec;
// }


// string good_seq(int n, vector<int>& p) {
//     int left = 0;
//     int right = n - 1;
//     vector<int> check_seq;
//     string res;

//     while (left <= right) {
//         bool use_left = true;
//         bool use_right = true;

//         check_seq.push_back(p[left]);
//         if (bad_seq(check_seq)) use_left = false;
//         check_seq.pop_back();

//         check_seq.push_back(p[right]);
//         if (bad_seq(check_seq)) use_right = false;
//         check_seq.pop_back();

//         if (use_left) {
//             check_seq.push_back(p[left]);
//             res += 'L';
//             left++;
//         } else {
//             check_seq.push_back(p[right]);
//             res += 'R';
//             right--;
//         }
//     }

//     return res;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> p(n);
//         for (int i = 0; i < n; i++) {
//             cin >> p[i];
//         }
//         cout << good_seq(n, p) << endl;
//     }

//     return 0;
// }

