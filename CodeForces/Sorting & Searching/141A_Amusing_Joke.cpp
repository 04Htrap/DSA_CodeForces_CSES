#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string guest, host, letters;
    cin >> guest >> host >> letters;

    string comb = guest + host;

    if (comb.length() != letters.length()) {
        cout << "NO" << endl;
        return 0;
    }
    
    sort(comb.begin(), comb.end());
    sort(letters.begin(), letters.end());

    if (comb == letters)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}