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
		int c;
		cin >> c;

		if(c > 20)
			cout << "HOT" << "\n";
		else
			cout << "COLD" << "\n";
	}
	return 0;
}
