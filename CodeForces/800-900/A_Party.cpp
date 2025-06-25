//For this que we make multiple trees for each root(manager who doesnt have a superior(value-1))
//Find all such trees and calculate their depths
//The tree with the max depth is the no of groups that are required 
//Memoize the depth data in order to decrease complexity from O(n^2) to O(n)

//Time Complexity O(n)

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findDepth(int i, const vector<int>& manager, vector<int>& depth) {
    if(depth[i] != 0)
        return depth[i];
        
    if (manager[i] == -1)
        depth[i] = 1;
    else
        depth[i] = 1 + findDepth(manager[i], manager, depth);

    return depth[i];
}
int main(){
    int n;
    cin >> n;

    vector<int> manager(n + 1);
    vector<int> depth(n + 1, 0);

    for(int i = 1; i <= n; i++){
        cin >> manager[i];
    }

    int maxDepth = 0;
    for(int i = 1; i <= n; i++){
        maxDepth = max(maxDepth, findDepth(i, manager, depth));
    }
    cout << maxDepth << endl;
    return 0;
}