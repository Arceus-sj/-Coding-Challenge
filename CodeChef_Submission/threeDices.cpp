#include<iostream>
#include<iomanip>
#include<ios>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        int sum = (x + y);
        
        float res;
        
        if(sum < 6) {
            res = (float(6 - sum) / float(6));
        }
        else {
            res = 0;
        }
        
        cout << res << endl;
    }
    return 0;
}
