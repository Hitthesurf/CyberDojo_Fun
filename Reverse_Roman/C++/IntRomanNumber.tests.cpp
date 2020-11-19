#include "IntRomanNumber.hpp"
#include <cassert>
#include <iostream>


void test_I_gives_number_1()
{
	assert(int_of_Roman_Number("I") == 1);
}

void test_III_gives_number_3()
{
	assert(int_of_Roman_Number("III") == 3);
}

void test_V_gives_number_5()
{
	assert(int_of_Roman_Number("V") == 5);
}

void test_IV_gives_number_4()
{
	//Testing a minus case
	assert(int_of_Roman_Number("IV") == 4);
}

void test_VIII_gives_number_8()
{
	assert(int_of_Roman_Number("VIII") == 8);
}

void test_IX_gives_number_9()
{
	assert(int_of_Roman_Number("IX") == 9);
}

void test_XL_gives_number_40()
{
	assert(int_of_Roman_Number("XL") == 40);
}

void test_XLVII_gives_number_47()
{
	assert(int_of_Roman_Number("XLVII") == 47);
}

void test_LXV_gives_number_65()
{
	assert(int_of_Roman_Number("LXV") == 65);
}

void test_XCIX_gives_number_99()
{
	assert(int_of_Roman_Number("XCIX") == 99);
}

void test_DCCLII_gives_number_752()
{
	assert(int_of_Roman_Number("DCCLII") == 752);
}

void test_MCMXC_gives_number_1990()
{
	assert(int_of_Roman_Number("MCMXC") == 1990);
}

void test_MMVIII_gives_number_2008()
{
	assert(int_of_Roman_Number("MMVIII") == 2008);
}

void test_MMMMCXCIX_gives_number_4199()
{
	assert(int_of_Roman_Number("MMMMCXCIX") == 4199);
}


int main()
{
	test_I_gives_number_1();
	test_III_gives_number_3();
	test_IV_gives_number_4();
	test_V_gives_number_5();
	test_VIII_gives_number_8();
	test_IX_gives_number_9();
	test_XL_gives_number_40();
	test_XLVII_gives_number_47();
	test_LXV_gives_number_65();
	test_XCIX_gives_number_99();
	test_DCCLII_gives_number_752();
	test_MCMXC_gives_number_1990();
	test_MMVIII_gives_number_2008();
	test_MMMMCXCIX_gives_number_4199();
	std::cout << "All tests passed\n";
}
