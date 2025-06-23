#include <cstring>
#include <iostream>
#include <map>

using namespace std;

// int main() {
//     char s1[100], s2[100];
//     scanf("%s %s", (s1+1), (s2+1));
//     int len1 = strlen(s1), len2 = strlen(s2);
//     int dp[100][100] = {};
//     for(int i = 1; i <= len1; i++) {
//         for(int j = 1; j <= len2; j++) {
//             if(s1[i-1] == s2[j-1]) {
//                 dp[i][j] = dp[i-1][j-1]+1;
//             } else {
//                 dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//             }
//         }
//     }
//     cout << dp[len1][len2] << endl;
// }