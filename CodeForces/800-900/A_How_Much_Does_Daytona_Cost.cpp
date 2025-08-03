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
	while(t--){
		int n, k;
		cin >> n >> k;
		bool ys = 0;
		for(int i = 0; i < n; i++){
			int a;
			cin >> a;
			if(a == k) ys = 1;
		}
		if(ys) cout << "YES" << endl;
        else cout << "NO" << endl;
	}
}