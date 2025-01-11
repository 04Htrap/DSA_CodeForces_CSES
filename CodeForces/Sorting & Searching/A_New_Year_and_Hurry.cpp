#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int maxProblem(int n, int k){
    int available = 240-k;
    int spent = 0;
    int solved = 0;
    for(int i = 1; i<=n; i++){
        spent = spent + 5*i;
        if(spent <= available){
            solved++;
        }
        else
            break;
    }
    return solved;
}
int main(){
    int n, k;
    cin >> n >> k;

    cout << maxProblem(n, k) << endl;
    
}