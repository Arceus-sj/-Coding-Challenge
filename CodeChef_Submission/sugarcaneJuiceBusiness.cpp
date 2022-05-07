#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    
	     
	    
	    /*
	      He spends 20% of his total income on buying sugarcane.
        He spends 20% of his total income on buying salt and mint leaves.
        He spends 30% of his total income on shop rent
	    */
	    int x = (n*50) * 20 /100;
	    int y = (n*50) * 30 / 100;
	    //cout << x << " " << y << "\n";
	    cout << (n*50) - (x + x + y) << "\n";
	}
	return 0;
}
