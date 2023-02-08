#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while(t--) {
		int a, b, c, x;
		cin >> a >> b >> c >> x;

		if(a+b >= x || b+c >= x || a+c >= x)
			cout << "YES" << "\n";
		else 
			cout << "NO" << "\n";

	}
	return 0;
}
