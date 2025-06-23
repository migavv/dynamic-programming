#include <algorithm>
#include <iostream>

using namespace std;

// int main() {
//     int n, arr[1000], dp[1000];
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++) {
//         dp[i] = 1;
//         for (int j = i-1; j >= 0; j--) {
//             if (arr[j] < arr[i]) {
//                 dp[i] = max(dp[i], dp[j] + 1);
//             }
//         }
//     }
//
//     cout << *max_element(dp, dp+n) << endl;
// }