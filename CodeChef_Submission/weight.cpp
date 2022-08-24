#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;
	while(t--) {
		int w, x, y, z;
		cin >> w >> x >> y >> z;

		if(w == x || w == y || w == z || (x+y) == w || (y+z) == w || (x+z) == w || (x+y+z) == w)
			cout << "YES" << "\n";
		else 
			cout << "NO" << "\n";


	}
	return 0;
}
