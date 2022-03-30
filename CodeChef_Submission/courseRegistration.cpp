#include<iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        if((k+n) <= m)
            cout << "Yes" << "\n";
        else 
            cout << "No" << "\n";
    }
    return 0;
}
