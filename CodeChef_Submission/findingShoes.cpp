#include<iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int chefsFriends, numberOfLeftShoes;
        cin >> chefsFriends >> numberOfLeftShoes;
        
        //int totalShoes = chefsFriends * 2;// total shoes require
        
        int totalLeftShoesRequire = (chefsFriends * 2) / 2;
        int totalRightShoesRequire = (chefsFriends * 2) / 2;
        
        if(numberOfLeftShoes > totalLeftShoesRequire) {
            cout << totalRightShoesRequire << "\n";
        }
        else if(numberOfLeftShoes < totalLeftShoesRequire) {
            cout << (totalLeftShoesRequire - numberOfLeftShoes) + totalRightShoesRequire << "\n";
        }
        else if(numberOfLeftShoes == totalLeftShoesRequire) {
            cout << totalRightShoesRequire << "\n";
        }
    }
    return 0;
}
