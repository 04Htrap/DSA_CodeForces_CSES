#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int longestUniqueSequence(int n, vector<int>& songs) {
    unordered_map<int, int> lastIndex; // Store last seen index of each song
    int left = 0, maxLength = 0;

    for (int right = 0; right < n; right++) {
        if (lastIndex.count(songs[right]) && lastIndex[songs[right]] >= left) {
            left = lastIndex[songs[right]] + 1; // Move left pointer past duplicate
        }
        
        lastIndex[songs[right]] = right; // Update last occurrence
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    int n;
    cin >> n;
    vector<int> songs(n);
    
    for (int i = 0; i < n; i++) {
        cin >> songs[i];
    }

    cout << longestUniqueSequence(n, songs) << endl;
    
    return 0;
}