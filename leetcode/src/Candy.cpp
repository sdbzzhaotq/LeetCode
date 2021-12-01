#include "Solution.h"
//L135
size_t Solution_Candy::candy(std::vector<int>& ratings) {
	auto size = ratings.size();
	if (size < 2) { return size; }

	std::vector<int> num(size, 1);
	for (int i = 1; i < size; i++) {
		if (ratings[i] > ratings[i - 1]) { num[i] = num[i - 1] + 1; }
	}

	for (auto i = size - 1; i > 0; i--) {
		if (ratings[i] < ratings[i - 1]) {
			num[i - 1] = std::max(num[i - 1], num[i] + 1);
		}
	}

	return std::accumulate(num.begin(), num.end(), 0);
}