#include "iostream"
#include "vector"
#include "unordered_map"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    // 排序
    int majorityElement01(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int length = nums.size() / 2;
        return nums[length];
    }
    // 哈希表
    int majorityElement(vector<int>& nums) {
        int current = 0, count = 0;
        unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num] += 1;
            if (counts[num] > count) {
                current = num;
                count = counts[num];
            }
        }
        return current;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    cout << "End of Debugging" << endl;
}