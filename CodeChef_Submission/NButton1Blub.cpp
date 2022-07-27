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
		int n;
		cin >> n;

		string s;
		cin >> s;
		string r;
		cin >> r;

		// cout << s << "\n" << r << "\n";

		int count_s = 0;
		int count_r = 0;

		for(int i=0;i<n;i++) {
			if(r[i] == '1')
				count_r++;
		}

		for(int i=0;i<n;i++) {
			if(s[i] == '1')
				count_s++;
		}

		int res = count_s - count_r;

		if(abs(res) & 1 == 1) 
			cout << 0 << "\n";
		else 
			cout << 1 << "\n";

	}
	return 0;
}