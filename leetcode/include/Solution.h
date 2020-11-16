#ifndef _LEETCODE_SOLUTION_H
#define _LEETCODE_SOLUTION_H

#include<vector>
#include "common.h"

class Solution_AssginCookies {
public:
     int findContentChildren(std::vector<int>& g, std::vector<int>& s);
};

class Solution_Candy {
public:
    int candy(std::vector<int>& ratings);
};

//Non-overlapping Intervals
class Solution_NonOverlappingInterval {
public:
    int eraseOverlapIntervals(std::vector<std::vector<int>>& intervals);
};

// Can Place Flowser
class Solution_CanPlaceFlowser {
public:
    bool canPlaceFlowsers(std::vector<int>& flowsered, int n);
};

#endif