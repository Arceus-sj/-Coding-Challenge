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
		int a,b,c,d;
		cin >> a >> b >> c >> d;

		a = max(a, b);
		c = max(c, d);

		cout << a + c << "\n";

	}
	return 0;
}