#include<iostream>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll int r1, w1, c1;
        cin >> r1 >> w1 >> c1;
         
        ll int r2, w2, c2;
        cin >> r2 >> w2 >> c2;
        
        ll int a = 0, b = 0;

        if(r1 > r2)
            a++;
        else    
            b++;
        
        if(w1 > w2)
            a++;
        else
            b++;

        if(c1 > c2)
            a++;
        else
            b++;

        // cout << a << " " << b << endl ;

        if(a > b)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
    return 0;
}