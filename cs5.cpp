#include <iostream>
using namespace std;

int main() {
    int age; cin >> age;
    float price = 20;
    if(age < 12) price *= 0.5;
    else if(age >= 60) price *= 0.7;
    cout << price;
}
