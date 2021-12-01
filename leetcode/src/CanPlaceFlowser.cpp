#include "Solution.h"
//L605
bool Solution_CanPlaceFlowser::canPlaceFlowsers(std::vector<int>& flowsered, int n) {
	int count = 0;
	flowsered.insert(flowsered.begin(), 0);
	flowsered.insert(flowsered.end(), 0);

	for (auto i = 1; i < flowsered.size() - 1; i++) {
		if (flowsered[i] == 0 && flowsered[i - 1] == 0 && flowsered[i + 1] == 0) {
			flowsered[i] = 1;
			count++;
		}
	}

	return n <= count;
}