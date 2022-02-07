#include "gtest/gtest.h"
#include "leetcode_functions.h"
#include <thread>
#include <bitset>

TEST(Solution_AssginCookies_Test,findContentChildren)
{
    std::vector<int> children = {};
    std::vector<int> cookies = {};
    Solution_AssginCookies assgincookies;

    children = {2,1};
    cookies = {2,1,3};
    ASSERT_EQ(2,assgincookies.findContentChildren(children,cookies));
    
    children = {1,3,2};
    cookies = {1,1};
    ASSERT_EQ(1,assgincookies.findContentChildren(children,cookies));

    children = { 3,2 };
    cookies = { 1,1,2,2,4 };
    ASSERT_EQ(2, assgincookies.findContentChildren(children, cookies));
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
    ASSERT_EQ(result, twoinputii.twoSum_Hash(numbers, 9));
    ASSERT_EQ(std::vector<int>{}, twoinputii.twoSum_Hash(numbers, 10));
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
    Solution_Sqrt sqrt;
    ASSERT_EQ(2,sqrt.mySqrt(8));
    ASSERT_EQ(3,sqrt.mySqrt(9));
    ASSERT_EQ(3,sqrt.mySqrt(10));
}


TEST(Solution_ArrayFindAllNumbersDisappearedInArray_TEST, myDisappearedArray) {
    Solution_ArrayFindAllNumbersDisappearedInArray disapperadArray;
    std::vector<int> array1 = { 4, 3, 2, 7, 8, 2, 3, 1 };
    std::vector<int> resut1 = { 5, 6 };
    ASSERT_EQ(resut1, disapperadArray.findDisappearedNumbers(array1));

    std::vector<int> array2 = { 1, 2, 3, 4, 5, 6, 7, 8 };
    std::vector<int> resut2 = {};
    ASSERT_EQ(resut2, disapperadArray.findDisappearedNumbers(array2));

    std::vector<int> array3 = { 4, 3, 3, 7, 8, 3, 3, 1 };
    std::vector<int> resut3 = { 2, 5, 6};
    ASSERT_EQ(resut3, disapperadArray.findDisappearedNumbers(array3));

}

TEST(Solution_RotateImage_TEST, Rotate) {
    Solution_RotateImage rotateimage;

    std::vector<std::vector<int>> matrix1 = { {1,2,3},{4,5,6},{7,8,9} };
    std::vector<std::vector<int>> result1 = { {7,4,1},{8,5,2},{9,6,3} };
    rotateimage.rotate(matrix1);
    ASSERT_EQ(result1, matrix1);

    std::vector<std::vector<int>> matrix2 = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
    std::vector<std::vector<int>> result2 = { {13,9,5,1},{14,10,6,2},{15,11,7,3},{16,12,8,4} };
    rotateimage.rotate(matrix2);
    ASSERT_EQ(result2, matrix2);
}


TEST(Solution_QueueUsingStacks_TEST, Queue) {
    QueueUsingStacks mQueue;
    ASSERT_EQ(true, mQueue.empty());
    mQueue.push(1);
    ASSERT_EQ(1, mQueue.peek());
    mQueue.push(2);
    ASSERT_EQ(1, mQueue.pop());
    ASSERT_EQ(2, mQueue.pop());
    ASSERT_EQ(true, mQueue.empty());
}

TEST(Solution_Valid_Parentheses_TEST, isValid) {
    Solution_Valid_Parentheses valid_parentheses;
    ASSERT_EQ(true,valid_parentheses.isValid("{[]}()"));
    ASSERT_EQ(true, valid_parentheses.isValid(""));
    ASSERT_EQ(false, valid_parentheses.isValid("a"));
    ASSERT_EQ(false, valid_parentheses.isValid("{{[[]]}})"));

}

TEST(Solution_Max_Area_Island_TEST, maxAreaOfIsland) {
    std::cout << __cplusplus << std::endl;
    Solution_Max_Area_Island max_island;
    std::vector<std::vector<int>> island ={}; 
    island = { {1,0,1,1,0,1,0,1}, {1,0,1,1,0,1,1,1},{0,0,0,0,0,0,0,1} };
    ASSERT_EQ(6, max_island.maxAreaOfIsland(island));
    island = { {1,0,1,1,0,1,0,1}, {1,0,1,1,0,1,0,1},{0,0,0,0,0,0,0,1} };
    ASSERT_EQ(4, max_island.maxAreaOfIsland(island));
}

Solution_Orderd_Print orderdprint;

void first_print() {
    printf("Frist\n");
}

void second_print() {
    printf("Second\n");
}

void third_print() {
    printf("Third\n");
}

void first_func() {
    orderdprint.first(first_print);
}

void second_func() {
    orderdprint.second(second_print);
}

void third_func() {
    orderdprint.third(third_print);
}

TEST(Solution_Orderd_Print_TEST, ordered_print) {


    std::vector<int> vec{ 1,2,3,4,5 };
    for (int num : vec) {
        num = num + 10;
        //std::cout << num << std::endl;
    }

    for (auto num : vec) {
        //std::cout << num << std::endl;
    }


    std::thread t3(third_func);
    std::thread t2(second_func);
    std::thread t1(first_func);

    t1.join();
    t2.join();
    t3.join();
}

TEST(Solution_Sum_Left_Leaves_TEST, sumOfLeftLeaves) {
    /*
                  1
                /   \
               2     3
              /       \
             4         5
    */
    TreeNode node4{ 4 };
    TreeNode node5{ 5 };
    TreeNode node2{ 2, &node4, nullptr };
    TreeNode node3{ 3, nullptr, &node5 };
    TreeNode node1{ 1, &node2, &node3 };
    Solution_Sum_Left_Leaves sumleftsums;
    ASSERT_EQ(4, sumleftsums.sumOfLeftLeaves_Recusion(&node1));
    ASSERT_EQ(4, sumleftsums.sumOfLeftLeaves_Stack(&node1));
    ASSERT_EQ(4, sumleftsums.sumOfLeftLeaves_DFS(&node1));
    ASSERT_EQ(0, sumleftsums.sumOfLeftLeaves_DFS(&node4));
    ASSERT_EQ(0, sumleftsums.sumOfLeftLeaves_DFS(&node3));
    ASSERT_EQ(4, sumleftsums.sumOfLeftLeaves_DFS(&node2));
}

TEST(Solution_Binary_Search_TEST, mySearch) {
    std::vector<int> nums = {-1,0,3,5,9,12};
    Solution_Binary_Search mysearch;
    ASSERT_EQ(4, mysearch.search(nums,9));
    ASSERT_EQ(1, mysearch.search(nums,0));
    ASSERT_EQ(-1, mysearch.search(nums,2));
}

TEST(Solution_Binary_Search_Insert_TEST, mySearchInsert) {
    std::vector<int> nums = {-1,0,3,5,9,12};
    Solution_Binary_Search_Insert mysearchinsert;
    ASSERT_EQ(1, mysearchinsert.searchInsert(nums,0));
    ASSERT_EQ(2, mysearchinsert.searchInsert(nums,2));
    ASSERT_EQ(6, mysearchinsert.searchInsert(nums,15));
    nums = {1,3,5,6};
    ASSERT_EQ(2, mysearchinsert.searchInsert(nums,5));
    ASSERT_EQ(1, mysearchinsert.searchInsert(nums,2));
    ASSERT_EQ(4, mysearchinsert.searchInsert(nums,7));
}

TEST(Solution_Square_Sorted_Array_TEST, mysortedSquares) {
    std::vector<int> input1 = {-5,-3,-2,0,1,3,7};
    std::vector<int> output1 = {0,1,4,9,9,25,49};
    Solution_Square_Sorted_Array mysortedSquares;
    ASSERT_EQ(output1, mysortedSquares.sortedSquares(input1));

    std::vector<int> input2 = {-4,-1,0,3,10};
    std::vector<int> output2 = {0,1,9,16,100};
    ASSERT_EQ(output2, mysortedSquares.sortedSquares(input2));

    std::vector<int> input3 = {-7,-3,2,3,11};
    std::vector<int> output3 = {4,9,9,49,121};
    ASSERT_EQ(output3, mysortedSquares.sortedSquares(input3));
}

GTEST_API_ int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
 }
