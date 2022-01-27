#include "Solution.h"
//L448

std::vector<int> Solution_ArrayFindAllNumbersDisappearedInArray::findDisappearedNumbers(std::vector<int>& nums) {
	for (auto num : nums) {
		int pos = abs(num) - 1;
		nums[pos] = nums[pos] > 0 ? -nums[pos] : nums[pos];
	}

	std::vector<int> ans = {};
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] > 0) {
			ans.push_back(i + 1);
		}
	}

	return ans;
}