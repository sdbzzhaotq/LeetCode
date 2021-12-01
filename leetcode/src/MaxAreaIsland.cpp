#include "Solution.h"
//L 695
std::vector<int> direction{-1,0,1,0,-1};
int Solution_Max_Area_Island::maxAreaOfIsland(std::vector<std::vector<int>>& grid) {
	int area = 0;
	auto m = grid.size();
	auto n = m ? grid[0].size() : 0;

	for (auto i = 0; i < m; i++) {
		for (auto j = 0; j < n; j++) {
			if (grid[i][j]) {
				auto local_area = 1;
				grid[i][j] = 0;
				std::stack<std::pair<int, int>> is_land;
				is_land.push({ i,j });
				while (!is_land.empty()) {
					auto [r, c] = is_land.top();
					is_land.pop();
					for (auto k = 0; k < 4; k++) {
						auto x = r + direction[k];
						auto y = c + direction[k + 1];
						if (x >= 0 && x < m
							&& y >= 0 && y < n
							&& grid[x][y] == 1) {
							grid[x][y] = 0;
							local_area++;
							is_land.push({ x,y });
						}
					}
				}
				area = std::max(area, local_area);
			}
		}
	}

	return area;
}