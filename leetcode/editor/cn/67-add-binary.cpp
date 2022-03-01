#include "iostream"
#include "string"
#include "algorithm"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string addBinary(string a, string b) {
        string answer, c;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        // a长b短
        if (a.size() < b.size()) {
            c = a;
            a = b;
            b = c;
        }
        // 当前指向数据
        int a_point, b_point, current_sum, flag = 0;
        for (int i = 0; i < b.size(); ++i) {
            a_point = a[i] - '0';
            b_point = b[i] - '0';
            current_sum = a_point + b_point + flag;
            if (current_sum >= 2) {
                answer.push_back(char(current_sum - 2 + '0'));
                flag = 1;
            } else {
                answer.push_back(char(current_sum + '0'));
                flag = 0;
            }
        }
        if (a.size() > b.size()) {
            for (int i = b.size(); i < a.size(); ++i) {
                a_point = a[i] - '0';
                current_sum = a_point + flag;
                if (current_sum >= 2) {
                    answer.push_back(char(current_sum - 2 + '0'));
                    flag = 1;
                } else {
                    answer.push_back(char(current_sum + '0'));
                    flag = 0;
                }
            }
        }
        if (flag == 1) {
            answer.push_back('1');
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    cout << s.addBinary("111", "111");
    cout << "End of Debugging" << endl;
}