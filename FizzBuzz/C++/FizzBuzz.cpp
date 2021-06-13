#include "FizzBuzz.hpp"
#include <string>

std::string FizzBuzz(int num)
{
    std::string snum = "";
    bool isWord = false;
    
    if (num%3==0)
    {
        //multiple of 3
        snum += "Fizz";
        isWord = true;
    }
    
    if (num%5==0)
    {
        //Multiple of 5
        snum += "Buzz";
        isWord = true;
    }
    
    if (isWord==false)
    {
        //Not multiple of 3 or 5
        snum = std::to_string(num);
        
    }
    
    return snum;
}


