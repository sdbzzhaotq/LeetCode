#include "Solution.h"

std::vector<int> Solution_TwoInputII::twoSum(std::vector<int>& numbers, int target) {
    int l = 0;
    int r = numbers.size() - 1;
    int sum = 0;
   
    while (l < r) {
        sum = numbers[l] + numbers[r];
        if (sum == target) {
            break;
        }

        if (sum < target)
        {
            ++l;
        } else {
            --r;
        }
    }
    return std::vector<int>{l + 1, r + 1};
}
