#include "iostream"
#include "vector"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    // 暴力解法（超时）
    int maxArea01(vector<int>& height) {
        int length = height.size(), answer = 0;
        for (int i = 0; i < length; ++i) {
            int left = height[i];
            for (int j = i; j < length; ++j) {
                int right = height[j];
                int min_h = min(left, right);
                answer = max(answer, min_h * (j - i));
            }
        }
        return answer;
    }

    // 双指针
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int ans = 0;
        while (right > left) {
            int minHeight = min(height[left], height[right]);
            ans = max(minHeight * (right - left), ans);
            if (height[left] > height[right]) {
                --right;
            } else {
                ++left;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> test = {1,8,6,2,5,4,8,3,7};
    cout << s.maxArea(test) << endl;
    cout << "End of Debugging" << endl;
}