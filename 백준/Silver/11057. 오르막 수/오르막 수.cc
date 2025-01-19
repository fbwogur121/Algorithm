#include <iostream>

using namespace std;

int main() {
    int n;
    long long dp[1010][10];
    cin >> n;
    
    for (int i = 0; i < 10; i++)
    {
        dp[n][i] = 1;
    }
 
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 9; j >= 0; j--)
        {
            dp[i][j] = 0;
 
            for (int k = j; k >= 0; k--)
            {
                dp[i][j] += dp[i + 1][k];
                dp[i][j] %= 10007;
            }
        }
    }
    cout << dp[0][9];
    
    return 0;
}