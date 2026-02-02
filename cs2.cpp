#include <iostream>
using namespace std;

int main() {
    int days; cin >> days;
    if(days <= 5) cout << "₹5";
    else if(days <= 10) cout << "₹10";
    else cout << "₹15";
}
