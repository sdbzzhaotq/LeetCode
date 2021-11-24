#include "Solution.h"

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
