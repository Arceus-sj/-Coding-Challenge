#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        
        int x, y;
        cin >> x >> y;
        
        string s;
        getline(cin >> ws, s);
        
        int countZero = 0, countOne = 0;
        for(int i = 0; i < n; i++) {
            //cout << s[i] <<", ";
            if(s[i] == '0')
                countZero++;
            else 
                countOne++;
        }
       
        
        // cout << countZero << "\n";
        // cout << countOne << "\n";
        
        if(x > y && (countOne >= 1 && countZero >= 1)) 
            cout << y << "\n";
        else if(y > x && (countOne >= 1 && countZero >= 1))
            cout << x << "\n";
        else if(x == y && (countOne >= 1 && countZero >= 1))
            cout << x << "\n";
        else if(countZero < 1 || countOne < 1) 
            cout << 0 << "\n";
            
        
    }
    return 0;
}
