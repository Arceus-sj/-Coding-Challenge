#include<iostream>
#define ll long long

using namespace std;

int main() {
    ll int n;
    cin >> n;

    int arr[n] = {0};
    ll int count = 0;
    for(int i = 1, j = 0; i <= n; i++) {
        if(n % i == 0) {
            arr[j] = i;
            count++;
            j++;
        }
    }

    cout << count << endl;
    for(int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}