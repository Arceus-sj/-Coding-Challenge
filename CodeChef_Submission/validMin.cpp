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
		int a,b,c;
		cin >> a >> b >> c;

		if(a == b && a == c && b == c)
			cout << "YES" << "\n";
		else if(a == b && c > a)
			cout << "YES" << "\n";
		else if(a == c && b > a)
			cout << "YES" << "\n";
		else if(b == c && a > b)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
		
	}
	return 0;
}