#include "iostream"
#include "vector"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int length = nums.size();
        int left = 0, right = length, middle, ans = length;
        while (left < right) {
            middle = left + ((right - left) >> 1);
            if (target <= nums[middle]) {
                 ans = middle;
                 right = middle;
            } else {
                left = middle + 1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> dataList = {1, 2, 4, 5, 6, 10, 13, 15};
    cout << s.searchInsert(dataList, 3);
    cout << "End of Debugging" << endl;
}