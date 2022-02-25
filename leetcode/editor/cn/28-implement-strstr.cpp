#include "iostream"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    // 暴力解法
    int strStr(string haystack, string needle) {
        int length = haystack.length();
        if (needle.length() == 0) {
            return 0;
        }
        for (int i = 0; i < length; ++i) {
            // 匹配第一个字符
            if (haystack[i] == needle[0] && length - i >= needle.length()) {
                string strHaystack = haystack.substr(i, needle.length());
                if (needle == strHaystack) {
                    return i;
                }
            }
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    cout << s.strStr("aaaaaa", "ab") << endl;
    cout << "End of Debugging" << endl;
}