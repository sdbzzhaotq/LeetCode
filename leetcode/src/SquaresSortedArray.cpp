#include "Solution.h"

std::vector<int> Solution_Square_Sorted_Array::sortedSquares(std::vector<int>& nums) {
    std::vector<int> ret_vec;
    ret_vec.resize(nums.size());

    auto left = nums.begin();
    auto right = nums.end() - 1;
    for(auto i=0;i<nums.size();i++) {
        auto left_sqr = (*left)*(*left);
        auto right_sqr = (*right)*(*right);
        if( left_sqr >= right_sqr) {
            ret_vec[i] = left_sqr;
            left++;
        } else {
            ret_vec[i] = right_sqr;
            right--;
        }
    }
    std::reverse(ret_vec.begin(),ret_vec.end());
    return ret_vec;
}

