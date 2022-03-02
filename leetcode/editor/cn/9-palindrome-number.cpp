#include "iostream"
#include "string"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        string x_str = to_string(x);
        for (int i = 0; i < (x_str.size() / 2); ++i) {
            if (x_str[i] != x_str[x_str.size() - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    if (s.isPalindrome(121)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    cout << "End of Debugging" << endl;
}