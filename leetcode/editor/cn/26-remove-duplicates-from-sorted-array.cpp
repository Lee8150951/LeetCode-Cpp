#include "iostream"
#include "vector"
#include "set"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        if (length == 0) {
            return 0;
        }
        int slow = 1;
        int fast = 1;
        while (fast < length) {
            if (nums[fast] != nums[fast - 1]) {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main() {
    Solution s;
    vector<int> data = {1, 2, 3, 4, 4, 5, 5};
    int answer = s.removeDuplicates(data);
    cout << answer << endl;

    cout << "End of Debugging" << endl;
}