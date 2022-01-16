#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int findMinFD(vector<int>& arr, int x) {
	int n = arr.size();
	int amountOfFD = 0;
	int countNumberOfFDOpen = 0;
	for(int i =0; i < n; i++) {
		amountOfFD += arr[i];
		countNumberOfFDOpen++;
		if(amountOfFD >= x)
			return countNumberOfFDOpen;
			
	}
	return -1;
}

void solve() {
	int n, x;
	cin >> n >> x;
	
	vector<int> arr;
	int it;
	for(int i = 0; i < n; i++) {
		cin >> it;
		arr.push_back(it);
	}
	
	sort(arr.begin(), arr.end(), greater<int>());
	
	cout << findMinFD(arr, x) << "\n";
	
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
