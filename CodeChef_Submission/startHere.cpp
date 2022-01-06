#include <iostream>

using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	
	if(n > m) {
		if(n % m == 0) {
			cout << "Yes";
		} else {
			cout << "No";
		}
	}
	else if(m > n) {
		if(m % n == 0) {
			cout << "Yes";
		} else {
			cout << "No";
		}
	}
	else {
		cout << "Yes";
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
