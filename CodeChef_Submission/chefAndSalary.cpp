#include<iostream>
#include<cstring> 
#include<climits>
#include<algorithm>

using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int x, y;
        int totalWorkingDays = 0;
        
        cin >> x >> y;

        string s;
        getline(cin >> ws, s);

        s[30] = 0;        
        for(int i = 0; i < 30; i++) {
            if(s[i] == '1')
                totalWorkingDays++;
            else    
                continue;
        }

        int initialSalary = totalWorkingDays * x;

        //cout << s << "\n";
        //cout << totalWorkingDays << " " << initialSalary << "\n";

        int highestStreak = INT_MIN, startCount = 0;
        for(int i = 0; i <= 30; i++) {
            if(s[i] == '1') {
                startCount++;
            }
            else {
                highestStreak = max(highestStreak, startCount);
                startCount = 0;
                continue;
            }
        }

        //cout << highestStreak << "\n";

        int finalSalary = initialSalary + (highestStreak * y);

        cout << finalSalary << "\n";
    }
    return 0;
}
