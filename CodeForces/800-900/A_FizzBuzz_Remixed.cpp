// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <cmath>
// #include <queue>
// #include <stack>
// #define ll long long
// using namespace std;

// void fizzBuzz(long long n){
//     int cycle = n / 15;
//     if(n == 0){
//         cout << 1 << endl;
//     }
//     if(n == 1){
//         cout << 2 << endl;
//     }
//     if(n < 15 && n >= 2){
//         cout << 3 << endl;
//     }
//     if(n == 15){
//         cout << 4 << endl;
//     }

//     if(n > 15){
//         int temp = 3 + (n / 15) * 3;
//         if(n - (15*cycle) < 3){
//             cout << temp - (n % (15 * cycle)) << endl;
//         }
//         else{
//             cout << temp << endl;
//         }
//     }
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
        
//     long long t;
//     cin >> t;

//     while(t--){
//         long long n;
//         cin >> n;
//         fizzBuzz(n);
//     }

//     return 0;
// }

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

void fizzBuzz(long long n) {
    long long cycle = (n / 15) * 3;
    int extra= 0;
    
    for (int i = 0; i <= n % 15; i++) {
        if (i % 3 == i % 5) {
            extra++;
        }
    }
    cout << cycle + extra<< endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        fizzBuzz(n);
    }

    return 0;
}
