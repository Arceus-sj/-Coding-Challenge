#include<iostream>
#include<cmath>

using namespace std;

int main() {
     
    double a, b, c;
    cin >> a >> b >> c;

    double s = (a + b + c) / 2;
    double area = sqrt((s * (s - a) * (s - b) * (s - c)));
    
    if(area > 0) {
        if(a == b && b == c && c == a)
            cout << 1 << endl;
        else if(a == b || b == c || c == a)
            cout << 2 << endl;
        else if(a != b && b != c && c != a)
            cout << 3 << endl;
    }
    else {
        cout << -1 << endl;
    }
        
    return 0;
}