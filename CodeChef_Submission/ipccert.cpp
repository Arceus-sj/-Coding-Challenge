#include <bits/stdc++.h>

using namespace std;

int numberOfStudent(vector<vector<int>> arr, int n, int m, int k) {

	int count = 0;

	for(int i = 0; i < n; i++) {

		// for(int j = 0; j < arr[i].size(); j++) {

		// 	cout << arr[i][j] << " ";
		// }
		// cout << "\n";


		cout << arr[i][0] << " " << arr[i][1] << "\n";

		if(arr[i][0] >= m && arr[i][1] <= 10)
			count++;
	}

	return count;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m, k;
	cin >> n >> m >> k;

	vector<vector<int>> arr;

	for(int i = 0; i < n; i++) {

		int val;
		int sum = 0;
		vector<int> temp;
		for(int j = 0; j < k+1; j++) {
			cin >> val;

			if(j == k)
				break;
			else
				sum += val;


		}

		temp.push_back(sum);
		temp.push_back(val);

		arr.push_back(temp);
		temp.clear();
	}


	cout << numberOfStudent(arr, n, m, k) << "\n";


	return 0;
}
