#include <cstring>
#include <iostream>

using namespace std;

int n;
int matrix[100][100];
int dp[100][100];

int dfs(int i, int j) {
    if (dp[i][j] != -1) { return dp[i][j]; }
    int res = 1;
    if (i - 1 >= 1 && matrix[i-1][j] - matrix[i][j] == 1) {
        res = max(res, dfs(i-1, j) + 1);
    } else if (i + 1 <= n && matrix[i+1][j] - matrix[i][j] == 1) {
        res = max(res, dfs(i+1, j) + 1);
    } else if (j - 1 >= 1 && matrix[i][j-1] - matrix[i][j] == 1) {
        res = max(res, dfs(i, j-1) + 1);
    } else if (j + 1 <= n && matrix[i][j+1] - matrix[i][j] == 1) {
        res = max(res, dfs(i, j+1) + 1);
    }
    return dp[i][j] = res;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> matrix[i][j];
        }
    }
    memset(dp, -1, sizeof(dp));
    int res = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            res = max(res, dfs(i, j));
        }
    }
    cout << res << endl;
}