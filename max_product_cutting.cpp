#include <iostream>

using namespace std;

// int main() {
//     int n; cin >> n;
//     int dp[1001] = {};
//     dp[1] = 1;
//     for (int i = 2; i <=n; i++) {
//         for (int j = i-1; j >= 1; j--) {
//             dp[i] = max(dp[i], max(j, dp[j]) * (i-j));
//         }
//     }
//     cout << dp[n] << endl;
// }