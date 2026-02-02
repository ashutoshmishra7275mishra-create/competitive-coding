#include <iostream>
using namespace std;

int main() {
    char ch; cin >> ch;
    string v="aeiouAEIOU";
    cout << (v.find(ch)!=string::npos ? "Vowel" : "Consonant");
}
