#include <iostream>
using namespace std;

int main() {
    float amt; cin >> amt;
    if(amt >= 3000) amt *= 0.7;
    else if(amt >= 2000) amt *= 0.8;
    else if(amt >= 1000) amt *= 0.9;
    cout << amt;
}
