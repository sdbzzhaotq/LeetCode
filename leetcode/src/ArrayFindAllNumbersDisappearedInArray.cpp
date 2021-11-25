#include "Solution.h"
//L448
/*
*给定一个长度为n 的数组，其中包含范围为1 到n 的整数，有些整数重复了多次，有些整数
*没有出现，求1 到n 中没有出现过的整数。
*/

/*利用数组的结构，建立n个桶，在原数组进行标记，如果某个数出现，则此数对应位置(pos-1)变为负数*/
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