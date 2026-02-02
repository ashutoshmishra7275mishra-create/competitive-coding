#include <iostream>
using namespace std;

int main() {
    float c; cin >> c;
    float f = c*9/5 + 32;
    cout << f << " ";
    if(c > 30) cout << "Hot";
    else if(c >= 15) cout << "Moderate";
    else cout << "Cold";
}
