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
		int a, b, c;
		cin >> a >> b >> c;

		int avg1 = (a+b)/2;
		int avg2 = (b+c)/2;
		int avg3 = (c+a)/2;

		// cout << avg1 << " " << avg2 << " " << avg3 << "\n";

		if(avg1 >= 35 && avg2 >= 35 && avg3 >= 35)
			cout << "Pass" << "\n";
		else
			cout << "Fail" << "\n";
	}
	return 0;
}
