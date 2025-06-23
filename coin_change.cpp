#include <iostream>

#define INF 10000

using namespace std;

// int main() {
//     int n, sum, coins[1000], dp[1000];
//     cin >> n >> sum;
//     for (int i = 0; i < n; i++) cin >> coins[i];
//
//     fill_n(dp, 1000, INF);
//     dp[0] = 0;
//
//     for (int i = 1; i <= sum; i++) {
//         for (int j = 0; j < n; j++) {
//            if (i - coins[j] >= 0)
//                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
//         }
//     }
//
//     if (dp[sum] == INF) cout << -1;
//     else cout << dp[sum] << endl;
// }