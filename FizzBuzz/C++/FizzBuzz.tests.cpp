#include "FizzBuzz.hpp"
#include <cassert>
#include <iostream>
#include <string>

void test_FizzBuzz_outputs_Fizz_for_only_multiples_of_3()
{
    assert(FizzBuzz(3) == "Fizz");
    assert(FizzBuzz(9) == "Fizz");
    assert(FizzBuzz(21) == "Fizz");
}

void test_FizzBuzz_outputs_Buzz_for_only_multiples_of_5()
{
    assert(FizzBuzz(5) == "Buzz");
    assert(FizzBuzz(10) == "Buzz");
    assert(FizzBuzz(20) == "Buzz");
}

void test_FizzBuzz_outputs_FizzBuzz_for_multiples_of_3_and_5()
{
    assert(FizzBuzz(15) == "FizzBuzz");
    assert(FizzBuzz(30) == "FizzBuzz");
    assert(FizzBuzz(60) == "FizzBuzz");
}

void test_FizzBuzz_outputs_string_numbers_for_multiples_not_of_3_or_5()
{
    assert(FizzBuzz(1) == "1");
    assert(FizzBuzz(8) == "8");
    assert(FizzBuzz(23) == "23");
}


int main()
{
    test_FizzBuzz_outputs_Fizz_for_only_multiples_of_3();
    test_FizzBuzz_outputs_Buzz_for_only_multiples_of_5();
    test_FizzBuzz_outputs_string_numbers_for_multiples_not_of_3_or_5();
    test_FizzBuzz_outputs_FizzBuzz_for_multiples_of_3_and_5();
    
    std::cout << "All tests passed\n";
}
