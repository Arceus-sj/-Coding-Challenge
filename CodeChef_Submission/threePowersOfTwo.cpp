#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin >> t;
    while(t--) {
        int n; cin >> n;
        
        cin.ignore();
        
        string binary;
        getline(cin, binary);
        
        int count = 0;
        
        for(auto i: binary) {
            if(i == '1') {
                count++;        
            }
        }
        if(binary == "1" || binary == "10") {
            cout << "NO" << "\n";
        }
        else if(count <= 3) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
