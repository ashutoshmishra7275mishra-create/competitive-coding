#include <iostream>
using namespace std;

int main() {
    int age, height;
    cin >> age >> height;
    cout << ((age >= 12 && height >= 150) ? "Eligible" : "Not Eligible");
}
