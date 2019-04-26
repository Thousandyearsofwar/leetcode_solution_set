
#include "Best_Time_to_Buy_and_Sell_Stock.h"


Best_Time_to_Buy_and_Sell_Stock::Best_Time_to_Buy_and_Sell_Stock()
{
}


Best_Time_to_Buy_and_Sell_Stock::~Best_Time_to_Buy_and_Sell_Stock()
{
}

int Best_Time_to_Buy_and_Sell_Stock::maxProfit(vector<int>& prices)
{
	/*
	int *memo = new int[prices.size() + 1];
	for (int i = 0; i <=prices.size(); i++)
		memo[i] = -1;
	return solution(prices.size()-1,prices,memo);
	*/
		if (prices.size() <= 1)
			return 0;
		int max = 0, min = prices[0];
		for (int i = 0; i < prices.size(); i++)
		{
			max = (prices[i] - min) > max ? (prices[i] - min) : max;
			min = prices[i] < min ? prices[i] : min;
		}
		return max;
}

int Best_Time_to_Buy_and_Sell_Stock::solution(int day, vector<int>& prices, int memo[])
{
	int q;
	if(memo[day]>=0)
		return memo[day];
	if (day == 0)
		q = -prices[0];
	else
	{
		q = -1;
		for (int i = 1; i <= day; i++) {
			int temp = solution(i - 1, prices, memo);
			int min = prices[0];
			for (int j = i; j > 0; j--)
				if (prices[j] < min)
					min = prices[j];
			if (temp < prices[i]-min)
				q = prices[i] - min;
			else
				q = temp;
		}
	}
	memo[day] = q;
	return q;
}
