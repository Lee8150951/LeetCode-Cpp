#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] == nums[i + 1]) {
                ++i;
            } else {
                return nums[i];
            }
        }
        return nums[nums.size() - 1];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> data = {2,2,1};
    cout << s.singleNumber(data);
    cout << "End of Debugging" << endl;
}