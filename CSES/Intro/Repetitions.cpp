#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
using namespace std;

int main(){
    string dna;
    cin >> dna;

    int n = dna.size();
    int maxi = 1, current = 1;

    for (int i = 1; i < n; i++) {
        if (dna[i] == dna[i - 1]) {
            current++;
        } else {
            maxi = max(maxi, current);
            current = 1;
        }
    }
    maxi = max(maxi, current);

    cout << maxi << endl;
    return 0;
}