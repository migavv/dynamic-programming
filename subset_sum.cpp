#include <iostream>

using namespace std;

// int main() {
//     int n, sum, val[1000] = {};
//     bool dp[1000][1000] = {};
//     cin >> sum; cin >> n;
//     for (int i = 1; i <= n; i++) {
//         cin >> val[i];
//     }
//     dp[0][0] = true;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= sum; j++) {
//            if (j >= val[i]) {
//                dp[i][j] = dp[i-1][j] || dp[i-1][j - val[i]];
//            } else {
//                dp[i][j] = dp[i-1][j];
//            }
//         }
//     }
//     cout << boolalpha << dp[n][sum] << endl;
// }
