#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--) {
	    int n, x;
	    cin >> n >> x;
	    
	    if(x == 0 || x == n)
	        cout << 0 << "\n";
	    else {
	        int y = n - x;
	        
	        cout << min(x, y) << "\n";
	    }
	}
	return 0;
}
