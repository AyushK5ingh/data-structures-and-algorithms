#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    if(a>=18) {
        cout<<("Adult\n");
    } else if(a<18) {
        cout<<("Not adult\n");
    } else {
        cout<<("Error\n");
    }
    int b;
    cin>>b;
    switch(b) {
        case 1:
            cout<<("One\n");
            break;
        case 2:
            cout<<("Two\n");
            break;
        case 3:
            cout<<("Three\n");
            break;
        default:
            cout<<("Error\n");
    }
    return 0;
}