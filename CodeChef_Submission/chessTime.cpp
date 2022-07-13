#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		// n = n*60;
		
		cout << (n*60)/20 << "\n";
	}
	return 0;
}
