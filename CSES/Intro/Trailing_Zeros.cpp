#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
using namespace std;

void trailing_zeros(long long n) {
    long long count = 0;
    while (n >= 5) {
        count += n / 5;
        n /= 5;
    }
    cout << count << endl;


}

int main() {
    long long n;
    cin >> n;
    trailing_zeros(n);
    return 0;
}