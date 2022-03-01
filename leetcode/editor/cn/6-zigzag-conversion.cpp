#include "iostream"
#include "string"
#include "vector"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }
        int length = s.size();
        string answer;
        vector<vector<char>> ansList;
        // 补全
        if (length % ((numRows * 2) - 2) != 0) {
            int sub = length + ((numRows * 2) - 2) - length % ((numRows * 2) - 2);
            for (int i = 0; i < sub; ++i) {
                s.push_back('0');
            }
        }
        for (int i = 0; i < numRows; ++i) {
            ansList.push_back({});
        }
        for (int i = 0; i < length; i = i + (numRows * 2) - 2) {
            string currentStr = s.substr(i, (numRows * 2) - 2);
            for (int j = 0; j < numRows - 1; ++j) {
                if (j == 0) {
                    for (int k = 0; k < numRows; ++k) {
                        ansList[k].push_back(currentStr[k]);
                    }
                } else {
                    ansList[numRows - 1 - j].push_back(currentStr[numRows + j - 1]);
                }
            }
        }
        for (int i = 0; i < numRows; ++i) {
            for (vector<char>::iterator it = ansList[i].begin(); it != ansList[i].end(); ++it) {
                if (*it != '0') {
                    answer.push_back(*it);
                }
            }
        }
        return answer;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    cout << s.convert("A", ) << endl;
    cout << "End of Debugging" << endl;
}