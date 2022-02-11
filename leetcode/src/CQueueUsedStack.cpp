#include "Solution.h"

void Solution_CQueue_Used_Stack::appendTail(int value) {
    stk4in.push(value);
    return;
}

int Solution_CQueue_Used_Stack::deleteHead() {
    int ret = 0;
    int tmp = 0;
    if(stk4out.empty()) {
        if(stk4in.empty()) {
            return -1;
        }

        while(!stk4in.empty()) {
            tmp = stk4in.top();
            stk4in.pop();
            stk4out.push(tmp);
        }
    }

    ret = stk4out.top();
    stk4out.pop();
    return ret;
}

