#include "Solution.h"

std::vector<int> Solution_Revert_Print_List::reversePrint(ListNode* head){
    std::stack<int> stk;
    std::vector<int> ret;
    ListNode* p = head;
    while(p) {
        stk.push(p->val);
        p = p->next;
    }

    while(!stk.empty()) {
        ret.push_back(stk.top());
        stk.pop();
    }

    return ret;
}

void Solution_Revert_Print_List::recursion(ListNode* head) {
    if(nullptr == head) {
        return;
    }

    recursion(head->next);

    ans.push_back(head->val);
}

std::vector<int> Solution_Revert_Print_List::reverseRecursion(ListNode* head){
    recursion(head);
    return ans;
}

