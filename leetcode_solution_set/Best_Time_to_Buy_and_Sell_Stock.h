#pragma once
#include<vector>
using namespace std;
class Best_Time_to_Buy_and_Sell_Stock
{
public:
	Best_Time_to_Buy_and_Sell_Stock();
	~Best_Time_to_Buy_and_Sell_Stock();
	int maxProfit(vector<int>& prices);
	int solution(int day,vector<int>& prices,int memo[]);
};

