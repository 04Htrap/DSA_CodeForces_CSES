#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int no, max_weight;
    cin >> no >> max_weight;

    vector<int> weights(no);
    for(int i = 0; i< no; i++){
        cin >> weights[i];
    }

    sort(weights.begin(), weights.end());

    int left = 0, right = no - 1, count = 0;
    
    while(left <= right){
        if(weights[left] + weights[right] <= max_weight){
            left++;
        }
        right--;
        count++;
    }

    cout << count << endl;

    return 0;
}
