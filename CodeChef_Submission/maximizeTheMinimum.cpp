#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a, a+n);
        
        if(k < n) {
            cout << a[k] << "\n";
        }
        else {
            cout << a[n-1] << "\n"; 
        }
    }
    return 0;
}
