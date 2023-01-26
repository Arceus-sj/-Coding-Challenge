#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	vector<int> arr;
	for(int i = a; i <= b; i++) {
		arr.push_back(i);
	}
	for(int i = c; i <= d; i++) {
		arr.push_back(i);
	}
	unordered_set <int> numSet(arr.begin(), arr.end());
	
	cout << numSet.size() << "\n";
	
	// for(auto x:numSet) {
	// 	cout << x << " ";
	// }
	// cout << "\n";
	arr.clear();
	numSet.clear();
}

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--) {
	    solve();
	}
	return 0;
}
