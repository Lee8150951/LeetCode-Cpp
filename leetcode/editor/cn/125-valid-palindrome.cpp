#include "iostream"
#include "string"
#include "algorithm"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isPalindrome(string s) {
        string vec_01;
        for (int i = 0; i < s.size(); ++i) {
            if (isalpha(int(s[i])) || isdigit(int(s[i]))) {
                vec_01.push_back(tolower(s[i]));
            }
        }
        string vec_02 = vec_01;
        reverse(vec_01.begin(), vec_01.end());
        return vec_01 == vec_02;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    if (s.isPalindrome("0P")) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    cout << "End of Debugging" << endl;
}