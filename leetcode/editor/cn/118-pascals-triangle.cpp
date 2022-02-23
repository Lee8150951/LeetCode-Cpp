#include "iostream"
#include "vector"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 0; i < numRows; ++i) {
            vector<int> cur(i + 1);
            // 前后置一
            cur[0] = 1, cur[i] = 1;
            if (i > 1) {
                for (int j = 1; j < i; ++j) {
                    cur[j] = ans[i - 1][j - 1] + ans[i - 1][j];
                }
            }
            ans.push_back(cur);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    s.generate(5);
    cout << "End of Debugging" << endl;
}