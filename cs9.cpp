#include <iostream>
using namespace std;

int main() {
    int salary, credit;
    cin >> salary >> credit;
    cout << ((salary >= 3000 && credit >= 700) ? "Eligible" : "Not Eligible");
}
