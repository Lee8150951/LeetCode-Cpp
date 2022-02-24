#include "iostream"
#include "stack"
#include "unordered_map"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<char, char> dictionary = {
            {')', '('},
            {']', '['},
            {'}', '{'}
    };
    bool isValid(string s) {
        int length = s.length();
        if (length % 2 != 0) {
            return false;
        }
        stack<char> stk;
        for (char ch : s) {
            if (this->dictionary.count(ch)) {
                if (stk.empty() || stk.top() != this->dictionary[ch]) {
                    return false;
                }
                stk.pop();
            } else {
                stk.push(ch);
            }
        }
        return stk.empty();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    string str = "(){}[]";
    if (s.isValid(str)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    cout << "End of Debugging" << endl;
}