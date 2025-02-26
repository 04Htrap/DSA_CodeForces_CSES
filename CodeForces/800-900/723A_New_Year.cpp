#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> positions(3);
    for (int i = 0; i < 3; i++) {
        cin >> positions[i];
    }
    
    sort(positions.begin(), positions.end());

    int totalDistance = (positions[1] - positions[0]) + (positions[2] - positions[1]);

    cout << totalDistance << endl;

    return 0;
}