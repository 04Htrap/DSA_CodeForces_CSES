#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> block(n);
    for(int i = 0; i < n; i++){
        cin >> block[i];
    }
    
    sort(block.begin(), block.end());

    for(int i = 0; i < n; i++){
        cout << block[i];

        if(i < n-1)
            cout << " ";
    }

    return 0;

}