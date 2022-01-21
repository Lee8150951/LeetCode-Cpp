#include "iostream"
#include "set"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    // 求下一个数
    int nextNum(int n) {
        int next = 0;
        while (n > 0) {
            int bit = n % 10;
            next += bit * bit;
            n = n / 10;
        }
        return next;
    }
    // 哈希表
    bool isHappy01(int n) {
        set<int> hash;
        while (n != 1 && hash.find(n) == hash.end()) {
            hash.insert(n);
            n = nextNum(n);
        }
        return n == 1;
    }

    // 快慢指针
    bool isHappy02(int n) {
        int slow = n;
        int fast = nextNum(n);
        while (slow != fast && fast != 1) {
            slow = nextNum(slow);
            fast = nextNum(nextNum(fast));
        }
        return fast == 1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    if (s.isHappy02(2)) {
        cout << "YES" << endl;
    } else {
        cout << "NOT" << endl;
    }
    
    cout << "End of Debugging" << endl;
}