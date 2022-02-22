#include "iostream"
#include "vector"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = digits.size();
        for (int i = length - 1; i >= 0; --i) {
            if (digits[i] != 9) {
                digits[i] += 1;
                for (int j = i + 1; j < length; ++j) {
                    digits[j] = 0;
                }
                return digits;
            }
        }
        // 如果等于9
        vector<int> answer(length + 1);
        answer[0] = 1;
        return answer;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> dataList = {1, 3, 1};
    s.plusOne(dataList);
    cout << "End of Debugging" << endl;
}