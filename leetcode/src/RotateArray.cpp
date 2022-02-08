#include "Solution.h"

void Solution_Rotate_Array::rotate1(std::vector<int>& nums, int k){
    auto size = nums.size();
    std::vector<int> newArr(size);

    for(auto i=0;i<size;i++) {
        newArr[(i+k)%size] = nums[i];
    }
    nums.assign(newArr.begin(), newArr.end());
}

void Solution_Rotate_Array::reverse(std::vector<int>& nums, int start, int end) {
    while(start<end) {
        std::swap(nums[start],nums[end]);
        start++;
        end--;
    }
}

void Solution_Rotate_Array::rotate2(std::vector<int>& nums, int k){
    auto size = nums.size();
    k = k%size;
    reverse(nums, 0, size-1);
    reverse(nums, 0, k-1);
    reverse(nums, k, size-1);
}