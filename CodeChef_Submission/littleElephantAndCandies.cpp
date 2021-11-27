#include<iostream>
#include<vector>

using namespace std;

void isElephantHappy(vector<int>& a, int numberOfCandies) {
	int N = a.size();
	int candyRequired = 0;
	for(int i = 0; i < N; i++) {
		candyRequired += a[i];
	}
	
	if(numberOfCandies  < candyRequired)
		cout << "No" << "\n";
	else if(numberOfCandies >= candyRequired)
		cout << "Yes" << "\n";
		
}

void solve() {
	int numberOfElephant, numberOfCandies;
	cin >> numberOfElephant >> numberOfCandies;
	
	vector<int> a;
	int item;
	for(int i = 0; i < numberOfElephant; i++) {
		cin >> item;
		a.push_back(item);
	}
	
	isElephantHappy(a, numberOfCandies);
}


int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
