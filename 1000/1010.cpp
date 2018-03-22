#include <iostream>

using namespace std;

int dp[31][31];
void dp_func(int n, int m){
	for (int i = 0; i < m; i++)
		dp[1][i] = i;
	for (int i = 0; i < n; i++)
		dp[i][i] = 1;
	for (int i = 2; i < n; i++)
		for (int j = i + 1; j < m; j++)
			dp[i][j] = dp[i - 1][j - 1] + dp[i][j - 1];

}

int main(){
	int n, m, t;
	int total = 0;

	cin >> t;

	for (int i = 0; i < t; i++){
		cin >> n >> m;

		dp_func(31, 31);

		cout << dp[n][m] << endl;
	}

	return 0;
}