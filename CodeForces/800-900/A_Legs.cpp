#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n; 
        cin >> n;

        int numCows = n / 4;
        int remainingLegs = n % 4;

        int numChickens = remainingLegs / 2;

        int totalAnimals = numCows + numChickens;

        cout << totalAnimals << endl;
    }
}