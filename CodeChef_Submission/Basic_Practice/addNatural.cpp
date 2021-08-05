#include<iostream>
#define ll long long

using namespace std;

int main() {
    ll int n;
    cin >> n;

    ll int ans = 0;
    for(int i = 1; i <= n; i++) {
        ans = ans + i;
    }

    cout << ans << endl;
    return 0;
}