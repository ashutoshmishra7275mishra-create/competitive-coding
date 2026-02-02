#include <iostream>
using namespace std;

int main() {
    int guess, magic = 7;
    cin >> guess;
    if(guess < magic) cout << "Too low!";
    else if(guess > magic) cout << "Too high!";
    else cout << "Correct!";
}
