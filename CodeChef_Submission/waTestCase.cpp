#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>

using namespace std;

int smallestTestcase(int n, vector<int>& size, string s) {
    int smallest = 101;
    
    for(int i = 0; i < n; i++) {
        if(s[i] == '0')
            smallest = min(smallest, size[i]);
        else 
            continue;
    }
    
    return smallest;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    cin >> n;
	    
	    vector<int> size;
        int val;
        for(int i = 0; i < n; i++) {
            cin >> val;
            size.push_back(val);
        }
        
        string v;
        cin >> v;
        
        // for(int i = 0; i < n; i++) {
        //     cout << s[i];
        // }
        // cout << endl;
        cout << smallestTestcase(n, size, v) << "\n";
	}
	return 0;
}
