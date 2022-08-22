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
		int a, b;
		cin >> a >> b;

		if(a == b) 
			cout << "Yes" << "\n";
		else {
			int val = 0;
			if(a < b) {
				val = (b - a)/2;

				if(a+val == b-val)
					cout << "Yes" << "\n";
				else
					cout << "No" << "\n";
			}	 
			else if(b < a) {
				val = (a-b)/2;

				if(b+val == a-val)
					cout << "Yes" << "\n";
				else
					cout << "No" << "\n";
			}


		}
	}
	return 0;
}
