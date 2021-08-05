#include<iostream>
#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;

    ll int k = 1;
    ll int count = 0;

    
    for(int i = 1; i <= n; i++) {
        int a[5] = {0};
        for(int j = 0; j < 5; j++) {
            a[j] = k;
            k++;
        }
        
        if(i % 2 != 0) {
            for(int x = 0; x < 5; x++)
                cout << a[x] << " ";
        }
        else {
            for(int x = 4; x >= 0; x--)
                cout << a[x] << " ";
        }
        cout << endl;
    }
    return 0;
}