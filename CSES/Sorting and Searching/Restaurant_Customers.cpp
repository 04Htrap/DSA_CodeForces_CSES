#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    int no;
    cin >> no;

    vector<pair<int, int> > events;
    
    for(int i = 0; i < no; i++){
        int a , b;
        cin >> a >> b;
        events.push_back(pair<int, int>(a, 1));
        events.push_back(pair<int, int>(b, -1));
    }


    sort(events.begin(), events.end());

    int current = 0, max = 0;
    for (int i = 0; i < events.size(); i++) {
        current += events[i].second;
        if (current > max) {
            max = current;
        }
    }

    cout << max;

    return 0;
}