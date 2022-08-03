#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while(t--) {
		double n, x, y, a, b;
		cin >> n >> x >> y >> a >> b;

		if(((n/a)*x) < ((n/b)*y)) {
			cout << "PETROL" << "\n";
		}
		else if(((n/a)*x) == ((n/b)*y)) {
			cout << "ANY" << "\n";
		}
		else {
			cout << "DIESEL" << "\n";
		}
	}

	return 0;
}