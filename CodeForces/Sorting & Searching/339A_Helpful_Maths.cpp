#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    string numbers;

    for (int i = 0; i < s.length(); i++){
        if(s[i] != '+')
            numbers += s[i];
    }

    sort(numbers.begin(), numbers.end());

    string result;
    for (int i = 0; i < numbers.length(); i++){
        result = result + numbers[i];
        if(i < numbers.length() - 1){
            result += '+';
        }
    }

    cout << result << endl;

    return 0;

}