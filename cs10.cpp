#include <iostream>
using namespace std;

int main() {
    int years; float salary;
    cin >> years >> salary;
    if(years > 10) cout << salary * 0.2;
    else if(years >= 5) cout << salary * 0.1;
    else cout << "No Bonus";
}
