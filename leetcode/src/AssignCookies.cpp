#include "Solution.h"

//L455
int Solution_AssginCookies::findContentChildren(std::vector<int>& children, std::vector<int>& cookies) {
    //œ»≈≈–Ú
    std::sort(children.begin(), children.end());
    std::sort(cookies.begin(), cookies.end());

    int child = 0, cookie = 0;
    while (child < children.size() && cookie < cookies.size()) {
        if (children[child] <= cookies[cookie]) {
            ++child;
        }
        ++cookie;
    }

    return child;
}

