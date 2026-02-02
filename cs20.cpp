#include <iostream>
using namespace std;

int main() {
    char c; cin >> c;
    if(isupper(c)) cout<<"Uppercase";
    else if(islower(c)) cout<<"Lowercase";
    else if(isdigit(c)) cout<<"Digit";
    else cout<<"Special Character";
}
