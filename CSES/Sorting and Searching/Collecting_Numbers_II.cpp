#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
using namespace std;

#define ll long long

void swap_update(ll n, ll a, ll b, vector<ll> &numbers, vector<ll> &positions) {
    swap(numbers[a-1], numbers[b-1]);

    positions[numbers[a-1]] = a-1;
    positions[numbers[b-1]] = b-1;

    ll round = 1;
    for (ll i = 1; i <= n; i++) {
        if (positions[i] < positions[i - 1]) {
            round++;
        }
    }

    cout << round << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    vector<ll> numbers(n);
    vector<ll> positions(n + 1);

    for (ll i = 0; i < n; i++) {
        cin >> numbers[i];
        positions[numbers[i]] = i;
    }

    while (m--) {
        ll a, b;
        cin >> a >> b;
        swap_update(n, a, b, numbers, positions);
    }

    return 0;
}