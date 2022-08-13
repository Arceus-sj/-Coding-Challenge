#include <iostream>
using namespace std;

string solve(int a, int b) {
    if(a < b) {
        while(a <= b) {
            if(a == b) {
                return "YES";
            }
            a = a * 2;
        }
    }
    else {
        while(b <= a) {
            if(b == a) {
                return "YES";
            }
            b = b * 2;
        }
    }
    return "NO";
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int a, b;
	    
	    cin >> a >> b;
	    
	    if(a == b) {
	        cout << "YES" << "\n";
	    }
	    else {
	        cout << solve(a, b) << "\n";
	    }
	}
	return 0;
}
