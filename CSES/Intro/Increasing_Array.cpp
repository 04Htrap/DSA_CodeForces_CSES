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
    int n;
    cin >> n;

    vector<long long> cont(n);
    for(int i = 0; i < n; i++){
        cin >> cont[i];
    }

    long long move = 0;
    for(int i = 1; i < n; i++){
        if(cont[i] < cont[i-1]){
            move += cont[i-1] - cont[i];
            cont[i] = cont[i-1];
        }
    }

    cout << move << endl;


    return 0;
}