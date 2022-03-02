#include "iostream"
#include "unordered_map"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> s_Dictionary, t_Dictionary;
        int length = s.size();
        for (int i = 0; i < length; ++i) {
            char x = s[i], y = t[i];
            if ((s_Dictionary.count(x) && s_Dictionary[x] != y) || (t_Dictionary.count(y) && t_Dictionary[y] != x)) {
                return false;
            }
            s_Dictionary[x] = y;
            t_Dictionary[y] = x;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    
    cout << "End of Debugging" << endl;
}