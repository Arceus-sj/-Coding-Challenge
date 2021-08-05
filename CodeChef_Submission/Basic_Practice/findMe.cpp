#include<iostream>
#define ll long long

using namespace std;

int findMe(int *a, int n, int k) {
    for(ll int i = 0; i < n; ) {
        if(a[i] == k) 
            return 1;
        else
            i++;
    }

    return -1;
}

int main() {
    ll int n, k;
    cin >> n >> k;
    int a[n];
    for(ll int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << findMe(a, n, k) << endl; 
    return 0;
}