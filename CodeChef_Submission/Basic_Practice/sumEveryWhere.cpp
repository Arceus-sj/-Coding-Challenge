#include<iostream>
#define ll long long
using namespace std;

int main() {
    ll int n;
    cin >> n;

    ll int oddAns = 0, evenAns = 0;
    ll int countOdd = 0, countEven = 0;
    if(n == 1) {
        oddAns = 1;
        evenAns = 2;
        
    }
    else {
        ll int i = 1;
        while(countOdd != n) {
            if(i % 2 != 0) {
                oddAns += i;
                countOdd++;
                i++;
            }
            else {
                i++;
            }
        }

        ll int j = 1; 
        while(countEven != n) {
            if(j % 2 == 0) {
                evenAns += j;
                countEven++;
                j++;
            }
            else {
                j++;
            }
        }
    }
        

    cout << oddAns << " " << evenAns << endl;
    return 0;
}