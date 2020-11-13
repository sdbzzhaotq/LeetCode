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
}


