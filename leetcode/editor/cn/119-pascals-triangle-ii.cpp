#include "iostream"
#include "vector"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        for (int i = 0; i < rowIndex + 1; ++i) {
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
        return ans[rowIndex];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    cout << "End of Debugging" << endl;
}