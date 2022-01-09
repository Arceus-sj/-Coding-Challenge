#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

string satisfyKeplersLaw(double t1, double t2, double r1, double r2) {
	double res1 = ((t1*t1) / (r1*r1*r1));
	double res2 = ((t2*t2) / (r2*r2*r2));
	
	if (res1 == res2)
		return "Yes";
	else
		return "No";
	
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		double t1, t2, r1, r2;
		cin >> t1 >> t2 >> r1 >> r2;
		cout << satisfyKeplersLaw(t1, t2, r1, r2) << "\n";
	}
	return 0;
}
