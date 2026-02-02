#include <iostream>
using namespace std;

int main() {
    int ch; float bal=1000, amt;
    cin >> ch;
    if(ch==1) cout << bal;
    else if(ch==2){ cin>>amt; if(amt<=bal) cout<<bal-amt; else cout<<"Insufficient"; }
    else if(ch==3){ cin>>amt; cout<<bal+amt; }
}
