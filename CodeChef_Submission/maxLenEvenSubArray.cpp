#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, item = 1, ans;
        cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++) {
            a.push_back(item);
            item++;
        }
        
        int firstSum = 0;
        for(int i = 0; i < n; i++) {
            firstSum += a[i];
        }
        
        
        
        if(firstSum % 2 == 0) {
            ans = n;
        }
        else {
            ans = n - 1;
        }
        
        cout << ans << "\n";
    }
    return 0;
}
