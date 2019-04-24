#include<vector>
#include<iostream>
#include "Palindrome_Number.h"
using namespace std;

Palindrome_Number::Palindrome_Number()
{
}


Palindrome_Number::~Palindrome_Number()
{
}

bool Palindrome_Number::solution(int num)
{
	if (num < 0)
		return false;
	int num1 = num;
	vector<int> number;
	while (num1 != 0)
	{
		number.push_back(num1%10);
		num1 = num1 / 10;
	}
	int temp_num=0;
	int i = number.size()-1;
	for (vector<int>::iterator num_p = number.begin(); num_p != number.end(); ++num_p) {
		temp_num += *num_p *pow((double)10,i);
		i--;
	}
	if(temp_num!=num)
	return false;
}
