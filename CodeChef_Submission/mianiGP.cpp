#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
	    double x, y;
	    cin >> x >> y;
	    
	    x = (x / 100) * 107;
	   
	   if(y <= x)
	    cout << "YES" << "\n";
	   else 
	    cout << "NO" << "\n";
	}
	return 0;
}
