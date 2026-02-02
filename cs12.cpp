#include <iostream>
using namespace std;

int main() {
    int h; cin >> h;
    if(h < 12) cout << "Morning";
    else if(h < 17) cout << "Afternoon";
    else if(h < 21) cout << "Evening";
    else cout << "Night";
}

