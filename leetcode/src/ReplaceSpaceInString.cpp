#include "Solution.h"

std::string Solution_Replace_Space_String::replaceSpace(std::string s) {
    std::string ret;
    int len = s.length();

    for(char c:s){
        if(c != ' ') {
            ret.push_back(c);
        } else {
            ret.append("%20");
        }
    }

    return ret;
}


std::string Solution_Replace_Space_String::replaceSpaceII(std::string s) {
    int count = 0;
    int len = s.length();

    for(char c:s) {
        if(c == ' ') count++;
    }

    s.resize(s.length() + 2*count);

    int i = len - 1;
    int j = s.length() - 1;

    for(;i<j;i--,j--) {
        if(s[i] != ' ') {
            s[j] = s[i];
        } else {
            s[j--] = '0';
            s[j--] = '2';
            s[j] = '%';
        }
    }
    
    return s;
}
