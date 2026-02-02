#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    if(t < 0) cout << "Freezing";
    else if(t <= 10) cout << "Very Cold";
    else if(t <= 20) cout << "Cold";
    else if(t <= 30) cout << "Warm";
    else cout << "Hot";
}
