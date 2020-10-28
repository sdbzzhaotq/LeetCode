#pragma once
//leetcode_functions.h
#ifndef _LEETCODE_FUNCTIONS_H
#define _LEETCODE_FUNCTIONS_H
#include"common.h"

struct ListNode {
    int val;
    struct ListNode *next;
};

int* twoSum(int* nums, int numsSize, int target);
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);
int power4ten(int loop);
struct ListNode* Num2Node(int num);
void display(struct ListNode* head);
int Node2Num(struct ListNode* Node);
#endif
