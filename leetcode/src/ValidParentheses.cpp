#include "Solution.h"
bool Solution_Valid_Parentheses::isValid(std::string str) {
	std::stack<char> parsed;

	for (int i = 0; i < str.length(); i++) {
		if ('{' == str[i] || '[' == str[i] || '(' == str[i]) {
			parsed.push(str[i]);
		} else {
			if (parsed.empty()) {
				return false;
			}
			char c = parsed.top();
			if (str[i] == '}' && c == '{'
				|| str[i] == ']' && c == '['
				|| str[i] == ')' && c == '(') {
				parsed.pop();
			}
			else {
				return false;
			}
		}
	}

	return parsed.empty();
}