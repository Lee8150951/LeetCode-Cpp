#include "iostream"
#include "vector"
// C++中的哈希表用unordered_map表示
#include "unordered_map"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    // 暴力解法
    vector<int> twoSum01(vector<int>& nums, int target) {
        // 获取长度
        int length = nums.size();
        for (int i = 0; i < length; ++i) {
            for (int j = i + 1; j < length; ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }

    // 哈希表
    vector<int> twoSum02(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashmap.find(target - nums[i]);
            if (it != hashmap.end()) {
                return {i, it->second};
            }
            hashmap[nums[i]] = i;
        }
        return {};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> data{2, 7, 11, 15};

    int target = 9;
    vector<int> answer = s.twoSum02(data, target);
    cout << answer[0] << answer[1] << endl;
    
    cout << "End of Debugging" << endl;
}