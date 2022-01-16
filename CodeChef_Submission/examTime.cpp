#include<iostream>

using namespace std;

void solve() {
	int dsa1, dsa2, toc1, toc2, dm1, dm2;
	cin >> dsa1 >> toc1 >> dm1;
	cin >> dsa2 >> toc2 >> dm2;
	
	int score1 = dsa1 + toc1 + dm1;
	int score2 = dsa2 + toc2 + dm2;
	
	if(score1 == score2) {
		if(dsa1 > dsa2) {
			cout << "DRAGON" << "\n";
		}
		else if(dsa1 == dsa2) {
			if(toc1 > toc2) {
				cout << "DRAGON" << "\n";
			}
			else if(toc1 == toc2) {
				if(dm1 == dm2) {
					cout << "TIE" << "\n";
				}
				else if(dm1 > dm2) {
					cout << "DRAGON" << "\n";
				}
				else {
					cout << "SLOTH" << "\n";
				}
			}
			else {
				cout << "SLOTH" << "\n";
			}
		}
		else {
			cout << "SLOTH" << "\n";
		}
	}
	else if(score1 > score2) {
		cout << "DRAGON" << "\n";
	}
	else {
		cout << "SLOTH" << "\n";
	}
		
		
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
