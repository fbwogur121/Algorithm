#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n+1, vector<char>(m+1));
    for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> v[i][j];
		}
	}

    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (v[i][j] == '1') {
					dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
				
			}
			else {
				dp[i][j] = 0;
			}
		}
	}

    int maxLength = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (dp[i][j] > maxLength) {
				maxLength = dp[i][j];
			}
		}
	}
	cout << maxLength * maxLength;
    
    return 0;
}