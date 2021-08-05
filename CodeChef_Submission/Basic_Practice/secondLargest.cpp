#include<iostream>
#include<algorithm>
#define ll long long 

using namespace std;

int main() {
    ll int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    ll int val = max({a, b ,c});
    ll int ans = 0;
    if(val == a) 
        ans = max(b, c);
    else if(val == b)
        ans = max(a, c);
    else
        ans = max(a, b);
    
    cout << ans << endl;
    return 0;
}