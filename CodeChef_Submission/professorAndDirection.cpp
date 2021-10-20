#include<iostream>
#include<cstring>

using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        string s;
        int n;
        cin >> n;
        getline(cin >> ws, s);

        for(int i = 0; i < n; i++) {
            if(s[i] == 'L' && s[i + 1] == 'L') {
                cout << "YES" << "\n";
                goto cvv;
            }
            else if(s[i] == 'R' && s[i + 1] == 'R') {
                cout << "YES" << "\n";
                goto cvv;
            }
            
        }

        cout << "NO" << "\n";

        cvv:;
    }
    return 0;
}
