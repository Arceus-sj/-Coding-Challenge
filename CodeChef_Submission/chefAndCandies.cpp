#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
       int n, x;
       cin >> n >> x;
       
       if (x >= n) {
           cout << 0 << "\n";
       }
       else {
           // candy required = n - x;
           int i = 0;
           while (1) {
               x = x + 4;
               i++;
               
                if(x >= n)
                    break;
           } 
           
           cout << i << "\n";
       }
    }
    return 0;
}
