#include "iostream"
#include "algorithm"
#include "vector"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        int left = 0;
        for (int right = 0; right < length; ++right) {
            if (nums[right] != val) {
                nums[left] = nums[right];
                left ++;
            }
        }
        return left;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> data = {3, 2, 2, 3, 4, 4, 5, 5};
    s.removeElement(data, 3);

    for (vector<int>::iterator it = data.begin(); it !=data.end(); it++) {
        cout << *it << " ";
    }
    cout << "End of Debugging" << endl;
}