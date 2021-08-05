#include<iostream>
#define ll long long

using namespace std;

void hisTrip(ll int n) {
    if(n % 5 == 0 || n % 6 == 0) 
        cout << "YES" << endl;
    else    
        cout << "NO" << endl;
}

int main() {
    ll int n;
    cin >> n;

    hisTrip(n);
    return 0;
}