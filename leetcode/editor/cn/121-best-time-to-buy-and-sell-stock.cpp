#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    // 暴力解法
    int maxProfit01(vector<int>& prices) {
        int length = prices.size();
        int ans = 0;
        for (int i = 0; i < length; ++i) {
            for (int j = i + 1; j < length; ++j) {
                ans = max(prices[j] - prices[i], ans);
            }
        }
        return ans;
    }

    // 一次遍历
    int maxProfit(vector<int>& prices) {
        int ans = 0, minprice = prices[0];
        for (int price : prices) {
            ans = max(ans, price - minprice);
            minprice = min(minprice, price);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> test = {7,1,5,3,6,4};
    cout << s.maxProfit(test) << endl;
    cout << "End of Debugging" << endl;
}