#include "iostream"
#include "unordered_map"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<char, int> dictionary = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
    };
    int romanToInt(string s) {
        int answer = 0;
        int length = s.length();
        for (int i = 0; i < length; ++i) {
            int value = dictionary[s[i]];
            if (i < length - 1 && value < dictionary[s[i + 1]]) {
                answer -= value;
            } else {
                answer += value;
            }
        }
        return answer;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    int answer = s.romanToInt("III");
    cout << answer << endl;

    cout << "End of Debugging" << endl;
}