#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int upper = 0, lower = 0;

    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) 
            upper++;
        else 
            lower++;
    }

    if(lower >= upper)
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    else
        transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s << endl;

    return 0;
}