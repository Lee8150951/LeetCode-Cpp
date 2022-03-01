#include "iostream"
#include "string"
#include "math.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int answer = 0, length = columnTitle.size();
        int current;
        for (int i = length - 1; i >= 0; --i) {
            current = (columnTitle[i] - 64) * pow(26, length - 1 - i);
            answer += current;
        }
        return answer;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    cout << s.titleToNumber("FXSHRXW");
    cout << "End of Debugging" << endl;
}