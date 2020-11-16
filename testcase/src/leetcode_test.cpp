//leetcode_test.cpp
#include "googletest.h"
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
