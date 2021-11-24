#include "Solution.h"
#include <unordered_map>
/*
* 给定一个整数数组 nums 和一个整数目标值 target，
在该数组中找出和为目标值target的那两个整数，并返回它们的数组下标。
数组假定是从小到大排序且没有重复值
*/
std::vector<int> Solution_TwoInputII::twoSum(std::vector<int>& numbers, int target) {
    int left = 0;
    int right = numbers.size() - 1;
    int sum = 0;
   
    while (left < right) {
        sum = numbers[left] + numbers[right];
        if (sum == target) {
            break;
        }

        if (sum < target) {
            ++left;
        } else {
            --right;
        }
    }
    return std::vector<int>{left + 1, right + 1};
}

std::vector<int> Solution_TwoInputII::twoSum_Hash(std::vector<int>& numbers, int target)
{
    std::unordered_map<int, int> ans;
    //这个地方第一次错误的写成了numbers.size() - 1;{2,7,11,15}，22 这样的测试发现了问题
    for (int i = 0; i < numbers.size(); i++) {
        auto t = ans.find(target - numbers[i]);
        if (t != ans.end()) {
            return { t->second + 1, i + 1 };
        }
        ans[numbers[i]] = i;
    }
    return {};
}
