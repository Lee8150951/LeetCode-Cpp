//
// Created by Jacob Lee on 2022/1/25.
// 二分查找
//
#include "iostream"
#include "vector"
using namespace std;

int binarySearch(vector<int> vec, int target) {
    // 获得数组长度
    int length = vec.size();
    // 初始化左右区间和中间数值
    // 左闭右开区间
    int left = 0, right = length, middle;
    while (left < right) {
        middle = left + ((right - left) >> 1);
        if (target == vec[middle]) {
            return middle;
        } else if (target < vec[middle]) {
            right = middle;
        } else if (target > vec[middle]) {
            left = middle + 1;
        }
    }
    return -1;
}

int main() {
    vector<int> dataList = {1, 2, 4, 5, 6, 10, 13, 15};
    int answer = binarySearch(dataList, 6);
    cout << answer;
}