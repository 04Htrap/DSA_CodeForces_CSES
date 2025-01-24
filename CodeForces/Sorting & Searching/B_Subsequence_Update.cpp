#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
using namespace std;

void beautifulPermutation(int n)
{
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for (int i = 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        beautifulPermutation(n);
    }
    return 0;
}