#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int t;
	cin >> t;
	while(t--) {
		int x;
		cin >> x;
		
		if (x>=1 && x <= 9)
			cout << x << "\n";
		else 
			cout << (x%10) << "\n";
	}
	return 0;
}
