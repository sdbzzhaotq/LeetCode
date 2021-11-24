#include "Solution.h"
#include <unordered_map>
/*
* ����һ���������� nums ��һ������Ŀ��ֵ target��
�ڸ��������ҳ���ΪĿ��ֵtarget�����������������������ǵ������±ꡣ
����ٶ��Ǵ�С����������û���ظ�ֵ
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
    //����ط���һ�δ����д����numbers.size() - 1;{2,7,11,15}��22 �����Ĳ��Է���������
    for (int i = 0; i < numbers.size(); i++) {
        auto t = ans.find(target - numbers[i]);
        if (t != ans.end()) {
            return { t->second + 1, i + 1 };
        }
        ans[numbers[i]] = i;
    }
    return {};
}
