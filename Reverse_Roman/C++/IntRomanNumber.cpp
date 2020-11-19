#include "IntRomanNumber.hpp"

int int_of_Roman_Number(std::string Roman_Num)
{
	std::map<char, int> Roman_Map = { { 'I',    1 },{ 'V',   5 },{ 'X',  10 },
	{ 'L',   50 },{ 'C', 100 },{ 'D', 500 },
	{ 'M', 1000 } };
	int total = 0;
	for (int index = 0; index < (int)Roman_Num.length(); index++)
	{
		//Look at next value and if less than current value minus from total
		int current_value = Roman_Map[Roman_Num[index]];
		int next_value = Roman_Map[Roman_Num[index + 1]];
		// when out of range it next_value will be 0
		if (current_value < next_value)
		{
			total = total - current_value;
		}
		else {

			total = total + current_value;
		}

	}

	return total;
}

