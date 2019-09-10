class Solution {
public:
	int maxArea(vector<int>& height) {
		int max = 0;
		int tmp = 0;
		for (int i = 0; i < height.size(); i++) {
			for (int j = height.size() - 1; j > i; j--) {
				if (height[i] < height[j]) {
					tmp = (j - i) * height[i];
				} else {
					tmp = (j - i) * height[j];
				}
				if (tmp > max) max = tmp;

			}
		}
		return max;
	}
};