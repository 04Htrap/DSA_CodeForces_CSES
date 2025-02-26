#include <iostream>
#include <set>
using namespace std;

int main() {
    string username;
    cin >> username;

    set<char> unique(username.begin(), username.end());

    if (unique.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}