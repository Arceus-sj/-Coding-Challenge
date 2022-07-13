#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int t;
	cin >> t;
	while(t--) {
		int x, y;
		cin >> x >> y;
		
		if(x>=y)
			cout << "YES" << "\n";
		else 
			cout << "NO" << "\n";
	}
	return 0;
}
