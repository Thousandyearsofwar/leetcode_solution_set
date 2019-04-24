
#include "climbStairs.h"


climbStairs::climbStairs()
{
}


climbStairs::~climbStairs()
{
}

int climbStairs::climb(int num)
{
	int *memo = new int[num + 1];
	for (int i = 0; i <= num; i++)
		memo[i] = 0;
	return solution(0, num, memo);
}

int climbStairs::solution(int stair, int place, int me[])
{
	if (stair > place)
		return 0;
	if (place == stair)
		return 1;
	if (me[stair] != 0)
		return me[stair];
	else
	{

		me[stair] += solution(stair + 1, place, me);
		me[stair] += solution(stair + 2, place, me);
		return me[stair];
	}
}
