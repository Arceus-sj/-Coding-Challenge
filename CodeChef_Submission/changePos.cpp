#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int startingX, startingY, endingX, endingY;
        cin >> startingX >> startingY >> endingX >> endingY;
        
        if (startingX != endingX && startingY != endingY)
            cout << 1 << "\n";
        else 
            cout << 2 << "\n";
    }
    return 0;
}
