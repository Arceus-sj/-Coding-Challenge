#include <bits/stdc++.h>

using namespace std;

long long int solve(vector<int>& a, int m) {
	// vector<int> e;
	long long int maxEl = 0;
	for(int i = 0; i < a.size(); i++) {
		long long int el = (max(abs(a[i] - 1), abs(a[i] - m)));

		maxEl += el;
	}
	return maxEl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;

		vector<int> a;
		int val;
		for(int i = 0; i < n; i++) {
			cin >> val;
			a.push_back(val);
		}

		cout << solve(a, m) << "\n";

	}
	return 0;
}
