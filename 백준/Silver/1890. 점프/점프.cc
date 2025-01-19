#include <iostream>

using namespace std;

long long board[101][101];
long long dp[101][101];


int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> board[i][j];
        }
    }

    dp[0][0] = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int jump = board[i][j];
            if(i != n-1 && i+jump < n){
                dp[i+jump][j] += dp[i][j];
            }
            if(j != n-1 && j+jump < n){
                dp[i][j+jump] += dp[i][j];
            }
        }
    }
    cout << dp[n-1][n-1];
    
    return 0;
}