#include "iostream"
#include "vector"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    // 方法一：合并后排序
    void merge01(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < n; ++i) {
            nums1[m + i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }

    // 双指针
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = 0, p2 = 0;
        int sort[m + n];
        int cur;
        while (p1 < m || p2 < n) {
            if (p1 == m) {
                cur = nums2[p2++];
            } else if (p2 == n) {
                cur = nums1[p1++];
            } else if (nums1[p1] < nums2[p2]) {
                cur = nums1[p1++];
            } else if (nums2[p2] <= nums1[p1]) {
                cur = nums2[p2++];
            }
            sort[p1 + p2 -1] = cur;
        }
        for (int i = 0; i != m + n; ++i) {
            nums1[i] = sort[i];
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    cout << "End of Debugging" << endl;
}