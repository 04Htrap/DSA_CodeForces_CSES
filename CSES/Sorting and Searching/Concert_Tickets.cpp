#include <iostream>
#include <set>
#include <vector>
using namespace std;

void concertTickets(int no, int cust, multiset<int>& tickets, vector<int>& customer_max_prices) {
    for (int i = 0; i < cust; i++) {

        auto it = tickets.upper_bound(customer_max_prices[i]);

        if (it == tickets.begin()) {
            cout << -1 << endl;
        } else {
            cout << *--it << endl;
            tickets.erase(it);
        }

    }
}

int main() {
    int no, cust;
    cin >> no >> cust;
    
    multiset<int> tickets;
    vector<int> customer_max_prices(cust);
    
    for (int i = 0; i < no; i++) {
        int price;
        cin >> price;
        tickets.insert(price);
    }
    
    for (int i = 0; i < cust; i++) {
        cin >> customer_max_prices[i];
    }

    concertTickets(no, cust, tickets, customer_max_prices);

    return 0;
}