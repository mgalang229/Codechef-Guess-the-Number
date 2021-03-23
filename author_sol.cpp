#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// the answer is simple can simple be found in the perfect squares
	// because all perfect squares have odd number of factors
	// store all the perfect squares until 1000 because the perfect
	// square of 1000 is 10^6 (which is the limit in the problem)
	vector<int> perfect_squares;
	for (int i = 1; i <= 1000; i++) {
		perfect_squares.emplace_back(i * i);
	}
	int tt;
	cin >> tt;
	while (tt--) {
		for (auto it : perfect_squares) {
			// print out the query
			cout << it << endl;
			// DO NOT forget to flush the output after printing each line!
			fflush(stdout);
			// read the response of the judge
			int status;
			cin >> status;
			if (status == 1) {
				// if the judge's response is equal 1, then break the loop
				break;
			} else if (status == -1) {
				// otherwise, if the judge's response is equal to -1, then
				// terminate the program itself
				exit(0);
			}
		}
	}
	return 0;
}
