#include<iostream>
#define ll long long

using namespace std;
int main() {
    ll int l, r;
    cin >> l >> r;

    for(ll int i = l; i <= r; i++) {
        if(i % 2 != 0)
            cout << i << " ";
    }
    return 0;
} 
