
#include "rob.h"


rob::rob()
{
}


rob::~rob()
{
}

int rob::solution(vector<int>& nums) {
	if (nums.size() == 0)
		return 0;
	if (nums.size() == 1)
		return nums[0];
	int *mon = new int[nums.size()];
	for (int i = 0; i < nums.size(); i++) {
		mon[i] = 0;
	}
	mon[0] = nums[0];
	mon[1] = _max(nums[0], nums[1]);
	int a, b;
	for (int i = 2; i < nums.size(); i++) {
		a = mon[i - 1];
		b = mon[i - 2] + nums[i];
		mon[i] = _max(a, b);
	}
	return mon[nums.size() - 1];
}
