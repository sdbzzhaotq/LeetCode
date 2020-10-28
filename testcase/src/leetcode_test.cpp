//leetcode_test.cpp
#include "googletest.h"
#include "leetcode_functions.h"

TEST(two_sum_test,twoSum001)
{
    int nums[4]={2,7,11,15};
    int target = 9;
    int numsSize = 4;
    int* result = twoSum(nums,numsSize,target);

    ASSERT_EQ(0,*result);
    ASSERT_EQ(1,*(result+1));

    target = 26;
    result = twoSum(nums,numsSize,target);
    ASSERT_EQ(2,*result);
    ASSERT_EQ(3,*(result+1));

    target = 25;
    result = twoSum(nums,numsSize,target);
    ASSERT_EQ(NULL,result);
}
TEST(power4ten,power4)
{
    ASSERT_EQ(1,power4ten(0));
    ASSERT_EQ(10,power4ten(1));
    ASSERT_EQ(100,power4ten(2));
    ASSERT_EQ(1000,power4ten(3));
}

TEST(Num2Node,Num2Node)
{
    struct ListNode* node1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    node1 = Num2Node(807);

    struct ListNode* node2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    node2 = Num2Node(222);
    struct ListNode* node3 = (struct ListNode*)malloc(sizeof(struct ListNode));

    node3 = addTwoNumbers(node1,node2);

    // ASSERT_EQ(1,power4ten(0));
    ASSERT_EQ(1029,Node2Num(node3));
}



