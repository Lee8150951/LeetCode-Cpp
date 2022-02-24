#include "iostream"
#include "vector"
#include "string"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    // 暴力解法
    string longestCommonPrefix(vector<string>& strs) {
        string common = strs[0];
        int commonLength;
        for (string str : strs) {
            string cur = "";
            commonLength = (common.length() < str.length()) ? common.length() : str.length();
            for (int i = 0; i < commonLength; ++i) {
                if (common == "") {
                    return common;
                }
                if (common[i] == str[i]) {
                    cur += common[i];
                } else {
                    break;
                }
            }
            common = cur;
        }
        return common;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<string> str = {"cir","car"};
    string common = s.longestCommonPrefix(str);
    cout << common << endl;
    cout << "End of Debugging" << endl;
}