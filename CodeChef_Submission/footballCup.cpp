#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        
        if(x == y && x >= 1 && y >= 1)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}
