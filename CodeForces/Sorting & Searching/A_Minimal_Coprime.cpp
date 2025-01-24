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
    int t;
    cin >> t;

    while(t--){
        long long l,r;
        cin >> l >> r;

        if(l == 1 && r== 1)
            cout << r-l+1 << endl;
        else
            cout << r-l << endl;
    }

    return 0;
}




// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cmath>
// #include <queue>
// #include <stack>
// using namespace std;

// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// int segment(long long l, long long r){
//     int count = 0;
    
//     for(int i=l; i <= r; i++){
//         for(int j=i; j<= r; j++){
//             if(gcd(i,j) == 1)
//                 count++;
//         }
//     }
//     return count;
// }

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         long long l,r;
//         cin >> l >> r;
//         cout << segment(l, r) << endl;
//     }
//     return 0;
// }