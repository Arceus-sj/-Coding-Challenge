#include<iostream>
#define ll long long

using namespace std;

int main() {
    ll int t;
    cin >> t;
    while(t--) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
 
    if(((a+b) <= d && c <= e ) || ((a+c) <= d && b <= e) || ((b + c) <= d && a <= e)) 
        cout << "YES" << "\n";
    else 
        cout << "NO" << "\n";
    
    
    }
    return 0;
}
