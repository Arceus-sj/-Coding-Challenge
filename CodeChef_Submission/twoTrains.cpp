#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    
        vector<int> p;
        int val;
        int sum = 0;
        for(int i = 0; i < n-1; i++) {
            cin >>val;
            p.push_back(val);
            sum += val;
        }
        
        
        sort(p.begin(), p.end());
        
        cout << sum + p[n-2] << "\n";
        
        p.clear();
	    
	}
	return 0;
}
