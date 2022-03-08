#include "iostream"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int climbStairs(int n) {
        int p = 0, q = 0, r = 1;
        for (int i = 1; i <= n; ++i) {
            p = q;
            q = r;
            r = p + q;
        }
        return r;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    
    cout << "End of Debugging" << endl;
}