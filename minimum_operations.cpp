#include <iostream>
#include <climits>

using namespace std;

// int main() {
//     int n; cin >> n;
//     int dp[1000];
//     fill_n(dp, 1000, INT_MAX);
//     dp[1] = 0;
//     for (int i = 2; i <= n; i++) {
//        if (i % 2 == 0)
//            dp[i] = min(dp[i-1], dp[i/2]) + 1;
//        else
//            dp[i] = dp[i-1] + 1;
//     }
//     cout << dp[n] << endl;
// }