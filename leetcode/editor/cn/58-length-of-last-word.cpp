#include "iostream"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.size(), answer = 0;
        for (int i = length - 1; i >= 0; --i) {
            if (s[i] == ' ' && answer != 0) {
                break;
            } else if (s[i] != ' ') {
                ++answer;
            }
        }
        return answer;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    cout << s.lengthOfLastWord("luffy is still joyboy") << endl;
    cout << "End of Debugging" << endl;
}