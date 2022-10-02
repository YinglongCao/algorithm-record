#include <iostream>
#include <cstring>
using namespace std;

int lengthOfLongestSubstring(string s) {
    if (s.size() == 0) return 0;
    char map[130] = { 0 };
    char dp[s.size()];
    memset(dp, 1, s.size());
    int re = 1;
    map[s[0]] = 1;
    for (int i = 1; i < s.size(); i++) {
        if (map[s[i]] == 0) {
            map[s[i]] = 1;
            dp[i] += dp[i - 1];
            if (dp[i] > re) {
                re = dp[i];
            }
        } else {
            memset(map, 0, 130);
            map[s[i]] = 1;
        }
    }
    return re;
}

int main() {
    string s = "dvdf";
    cout << lengthOfLongestSubstring(s);
    return 0;
}