#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        long long  x=arr[0];
        for(int i=1;i<n;i++)
        {
            x^=arr[i];
        }
        if(n%2==1)cout<<x<<endl;
        else{

            int maxi=*max_element(arr.begin(),arr.end());
            if(x==0)
                cout<<maxi<<endl;
            else
                cout<<"-1"<<endl;
        }
    }
}