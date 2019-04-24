
#include "toy.h"

toy::toy()
{
}

toy::~toy()
{
}

bool toy::solution(int c, int o)
{
	if (!o)
	return false;
	int temp = c - (pow(2, o) - 1 - o);
	return(c == pow(2, o) - 1 - o) ||(temp % 2 != 1 && temp % 2 < o);
}
