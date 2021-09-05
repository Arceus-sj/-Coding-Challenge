
#include<iostream>
#include<vector>
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr;
        ll int a;
        
        int countOdd = 0;
        int countEven = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            arr.push_back(a);
            if(a % 2 == 0) 
                countEven++;
            else
                countOdd++;
        }
        
        int oddIndex = (n / 2) + (n % 2);
        int evenIndex = (n / 2);


        int ans = 0;

        if((countEven - oddIndex) > 0)
            ans = countEven - oddIndex;
        if((countOdd - evenIndex) > 0)
            ans = countOdd - evenIndex;
        
        cout << (n - ans) << "\n"; 
    }
    return 0;
}
