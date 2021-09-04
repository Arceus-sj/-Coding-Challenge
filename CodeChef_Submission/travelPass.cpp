#include<iostream>
#include<string>
#include<sstream>
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        getline(cin >> ws, s);
        int countZeros = 0;
        int countOnes = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '0')
                countZeros++;
            else
                countOnes++;
        }
        
        int totalTime = (countZeros * a) + (countOnes * b);

        cout << totalTime << "\n";
         
    }
    return 0;
}
