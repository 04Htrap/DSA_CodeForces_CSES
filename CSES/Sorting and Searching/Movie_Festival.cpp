#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compareMovies(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int> > movies;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        movies.push_back(make_pair(a, b));
    }

    sort(movies.begin(), movies.end(), compareMovies);

    int count = 0;
    int last_end_time = 0;

    for (int i = 0; i < n; i++) {
        if (movies[i].first >= last_end_time) {
            count++;
            last_end_time = movies[i].second;
        }
    }

    cout << count << endl;

    return 0;
}