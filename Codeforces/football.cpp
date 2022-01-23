#include<iostream>
#include<cstring>

using namespace std;

string solve(string s) {
	
	int n = s.length();
	
	if(n < 7) {
		return "NO";
	}
	else {
		
		for(int i = 0; i <= n - 7 ; i++) {
			
			if(s[i] == s[i+1] && s[i] == s[i+2] && s[i] == s[i+3] && s[i] == s[i+4] && s[i] == s[i+5] && s[i] == s[i+6]) {
				return "YES";
			}
		}
	}
	
	return "NO";
}

int main() {
	string s;
	getline(cin, s);
	
	cout << solve(s) << "\n";
	
	
	return 0;
}
