#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int move = x / 5;
    if(x % 5 != 0){
        move ++;
    }
    cout << move << endl;
    return 0;
}