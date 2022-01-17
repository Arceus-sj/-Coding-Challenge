#include<iostream>

using namespace std;

void solve() {
	int n;
	cin >> n;
	
	int r1, r2, r3, g1, g2, g3, b1, b2, b3;
	cin >> r1 >> g1 >> b1;
	cin >> r2 >> g2 >> b2;
	cin >> r3 >> g3 >> b3;

	
	int topCornerSum = g1 + b1 + b2;
	int bottomCornerSum = r2 + r3 + g3;
	
	//cout << topCornerSum << " " << bottomCornerSum << "\n";
		
	if(topCornerSum > bottomCornerSum)
		cout << topCornerSum << "\n"; 
	else 
		cout << bottomCornerSum << "\n";
	
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
