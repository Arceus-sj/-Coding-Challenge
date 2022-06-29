#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x , y;
        cin >> x >> y;
        
        if (x > y)
            cout << x << "\n";
        else 
            cout << y << "\n";
    }
    return 0;
}
