//#include "pch.h"
#include "gtest/gtest.h"
#include "leetcode_functions.h"

TEST(Solution_AssginCookies_Test,findContentChildren)
{   
    std::vector<int> children = {2,1};
    std::vector<int> cookies = {2,1,3};
    //for (const auto &c : children) std::cout << c << " ";
    //for (const auto &c : cookies) std::cout << c << " ";
    Solution_AssginCookies assgincookies;
    ASSERT_EQ(2,assgincookies.findContentChildren(children,cookies));
    
    children = {1,3,2};
    cookies = {1,1};
    ASSERT_EQ(1,assgincookies.findContentChildren(children,cookies));
}


TEST(Solution_Candy,candy)
{
    std::vector<int> ratings = {1,0,2};
    Solution_Candy candy;
    ASSERT_EQ(5,candy.candy(ratings));
}


TEST(Solution_NonOverlappingInterval,eraseOverlapIntervals) 
{
    Solution_NonOverlappingInterval nonoverlappinginterval;
    std::vector<std::vector<int>> intervals = {{1,2},{2,4},{1,3}};
    ASSERT_EQ(1,nonoverlappinginterval.eraseOverlapIntervals(intervals));
    intervals = {};
    ASSERT_EQ(0,nonoverlappinginterval.eraseOverlapIntervals(intervals));
}


TEST(Solution_CanPlaceFlowser,canPlaceFlowsers) 
{
    Solution_CanPlaceFlowser canplaceflowser;
    std::vector<int> flowsers = {1,0,0,0,1};
    ASSERT_EQ(true,canplaceflowser.canPlaceFlowsers(flowsers,1));
    ASSERT_EQ(false,canplaceflowser.canPlaceFlowsers(flowsers,2));
}

TEST(Solution_TwoInputII,twoSum) 
{
    Solution_TwoInputII twoinputii;
    std::vector<int> numbers = {2,7,11,15};
    std::vector<int> result = { 1,2 };
    std::vector<int> result2 = { 2,4 };

    ASSERT_EQ(result,twoinputii.twoSum(numbers,9));
    //ASSERT_EQ(result, twoinputii.twoSum_Hash(numbers, 9));
    //ASSERT_EQ(std::vector<int>{}, twoinputii.twoSum_Hash(numbers, 10));
    ASSERT_EQ(result2, twoinputii.twoSum_Hash(numbers, 22));
    
}

TEST(Solution_MergeSortedArray,merge) 
{
    Solution_MergeSortedArray mergesortedarray;
    std::vector<int> nums1 = {1,2,3,0,0,0}; 
    std::vector<int> nums2 = {2,5,6};
    std::vector<int> result = {1,2,2,3,5,6};
    mergesortedarray.merge(nums1,3,nums2,3);
    ASSERT_EQ(result,nums1);
}

TEST(Solution_LinkedListCycleII,detectCycle) 
{
    ListNode node1{3},node2{2},node3{0},node4{-4};
    node1.next = &node2; node2.next = &node3; node3.next = &node4; node4.next = &node2;

    Solution_LinkedListCycleII linkedlistcycleii;
    ASSERT_EQ(&node2,linkedlistcycleii.detectCycle(&node1));

    //std::cout<<node1.next<<std::endl;
    //std::cout<<linkedlistcycleii.detectCycle(&node1)<<std::endl;
}

TEST(Solution_Sqrt,mySqrt) 
{
    Solution_Sqrt sqrt;;
    ASSERT_EQ(2,sqrt.mySqrt(8));
    ASSERT_EQ(3,sqrt.mySqrt(9));
    ASSERT_EQ(3,sqrt.mySqrt(10));
}

