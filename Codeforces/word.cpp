#include <algorithm>
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

string printCorrectWord(string s) {
	int n = s.length();
	int countUppercase = 0;
	int countLowercase = 0;
	
	for(int i = 0; i < n; i++) {
		
		if(isupper(s[i]))
			countUppercase++;
		else 
			countLowercase++;
	}
	
	if(countUppercase > countLowercase) {
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		return s;
	}
	
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	return s;
	
}

int main() {
	string s;
	getline(cin, s);
	
	cout << printCorrectWord(s) << "\n";
	return 0;
}
