#include "Solution.h"

QueueUsingStacks::QueueUsingStacks() {
}
void QueueUsingStacks::push(int x) {
	in.push(x);
}
int QueueUsingStacks::pop() {
	in2out();
	int x = out.top();
	out.pop();
	return x;
}
int QueueUsingStacks::peek() {
	in2out();
	return out.top();
}
bool QueueUsingStacks::empty() {
	return in.empty() && out.empty();
}
void QueueUsingStacks::in2out() {
	if (out.empty()) {
		while (!in.empty()) {
			int x = in.top();
			in.pop();
			out.push(x);
		}
	}
}

