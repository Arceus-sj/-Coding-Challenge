#include<iostream>
#define ll long long

using namespace std;

int main() {
    ll int n;
    cin >> n;
    int a[n];
    for(ll int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(ll int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    return 0;
}