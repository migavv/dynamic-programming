#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int matrix[100][100];
    int dp[100][100][100] = {};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                if (j-1 >= 0 && matrix[i][j] < matrix[i][j-1]) {
                  dp[i][j][k] = max(dp[i][j][k], dp[i][j-1][k-1]);
                } else if (j+1 <= n && matrix[i][j] < matrix[i][j+1]) {
                    dp[i][j][k] = max(dp[i][j][k], dp[i][j+1][k-1]);
                } else if (i-1 >= 0 && matrix[i][j] < matrix[i-1][j]) {
                    dp[i][j][k] = max(dp[i][j][k], dp[i-1][j][k-1]);
                } else if (i+1 <= n && matrix[i][j] < matrix[i+1][j]) {
                    dp[i][j][k] = max(dp[i][j][k], dp[i+1][j][k-1]);
                }
            }
        }
    }
    int res = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            res = max(res, dp[i][j][])
        }
    }
}