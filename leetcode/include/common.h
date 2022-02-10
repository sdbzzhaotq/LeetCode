#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <stack>
#include <queue>
#include <functional>
#include <mutex>
#include <condition_variable>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
