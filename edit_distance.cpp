#include <cstring>
#include <iostream>

using namespace std;

// int main() {
//     char s1[100], s2[100];
//     scanf("%s %s", (s1+1), (s2+1));
//     int len1 = strlen(s1) - 1, len2 = strlen(s2) - 1;
//     int dp[100][100];
//     for (int i = 0; i <= len1; i++) { dp[i][0] = i; }
//     for (int j = 0; j <= len2; j++) { dp[0][j] = j; }
//     for(int i = 1; i <= len1; i++) {
//         for(int j = 1; j <= len2; j++) {
//             if (s1[i] == s2[j]) {
//                 dp[i][j] = dp[i-1][j-1];
//             } else {
//                 dp[i][j] = 1 + min(dp[i-1][j-1],
//                     min(dp[i][j-1], dp[i-1][j]));
//             }
//         }
//     }
//     cout << dp[len1][len2] << endl;
// }