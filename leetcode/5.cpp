#include <vector>
#include <string>
#include <iostream>
using namespace std;

string longestPalindrome(string s) {
    int n = s.size();
    if (n < 2) {
        return s;
    }
    int maxLength = 1;
    int begin = 0;
    vector<vector<bool>> dp(n, vector<bool>(n));
    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }

    // 从长度2开始，0和1情况不再要考虑
    for (int l = 2; l <= n; l++) {
        for (int i = 0; i < n; i++) {
            // 右边界索引
            int j = i + l - 1;
            if (j == n) {
                break;
            }
            // 新的长度左右一致
            if (s[i] == s[j]) {
                if (j - i < 3) {
                    dp[i][j] = true;
                } else {
                    dp[i][j] = dp[i + 1][j - 1];
                }
            } else {
                dp[i][j] = false;
            }

            // update the new maxLength if current value of substring length is longer then maxLength.
            // and record the valid substring begin index.
            if (dp[i][j] && j - i + 1 > maxLength) {
                maxLength = j - i + 1;
                begin = i;
            }
        }
    }

    return s.substr(begin, maxLength);
}


int main() {

    string s = "bb";
    cout << longestPalindrome(s);


    return 0;
}