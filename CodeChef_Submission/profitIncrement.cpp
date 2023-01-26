#include <iostream>
#include <cmath>

using namespace std;

void solve() {
	int sellingPrice, profit;
	cin >> sellingPrice >> profit;
	
	int buingPrice = sellingPrice - profit;
	int newPrice = sellingPrice + (sellingPrice * 10 / 100);
	
	// cout << newPrice << " " << buingPrice << "\n";
	
	cout << newPrice - buingPrice << "\n";
}

int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}
}
