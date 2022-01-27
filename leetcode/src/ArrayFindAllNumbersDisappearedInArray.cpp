#include "Solution.h"
//L448
/*
*����һ������Ϊn �����飬���а�����ΧΪ1 ��n ����������Щ�����ظ��˶�Σ���Щ����
*û�г��֣���1 ��n ��û�г��ֹ���������
*/

/*��������Ľṹ������n��Ͱ����ԭ������б�ǣ����ĳ�������֣��������Ӧλ��(pos-1)��Ϊ����*/
std::vector<int> Solution_ArrayFindAllNumbersDisappearedInArray::findDisappearedNumbers(std::vector<int>& nums) {
	for (int num : nums) {
		int pos = abs(num) - 1;
		nums[pos] = nums[pos] > 0 ? -nums[pos] : nums[pos];
	}

	std::vector<int> ans = {0};
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] > 0) {
			ans.push_back(i + 1);
		}
	}

	return ans;
}