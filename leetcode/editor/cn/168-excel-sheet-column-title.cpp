#include "iostream"
#include "string"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string answer;
        while (columnNumber > 0) {
            int num = (columnNumber - 1) % 26 + 1;
            answer += num - 1 + 'A';
            columnNumber = (columnNumber - num) / 26;
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    s.convertToTitle(1327);
    cout << "End of Debugging" << endl;
}