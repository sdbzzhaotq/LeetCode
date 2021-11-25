#include "Solution.h"
//L69
int Solution_Sqrt::mySqrt(unsigned int a) {
    if( 0==a ) return a;

    int l = 1;
    int r = a;
    int mid = 0;
    int sqrt = 0;

    while(l <= r) {
        mid = l + (r - l) / 2;
        sqrt = a / mid;
        if(sqrt == mid) {
            return mid;
        } else if (mid > sqrt) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return r;
}