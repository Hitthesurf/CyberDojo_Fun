#include "IntToRomanNum.h"


void Roman_Num(int Num, char* Roman_String)
{
    /* 
    Takes Num and turns it into Roman Number
    This is stored in Roman_String
    Make sure Roman_String is large enough
    Largest Num possible in Roman Numerals is
    */
    
    int Size = 13;
    char Roman_Letters[13][3] = {"I","IV","V","IX","X","XL","L",
                                "XC","C","CD","D","CM","M"};
    int Roman_Values[13] = {1, 4, 5, 9, 10, 40, 50, 90,
                           100, 400, 500, 900, 1000};
    
    int current_number = Num;
    
    char Temp_Roman_String[10] = ""; //10 as 3999 has 9 chars
    
    while (current_number != 0)
    {
           int largest_int = find_largest_int(current_number,
                                              Roman_Values, Size);        
           int index_of_largest_int = get_index_of(largest_int,
                                                   Roman_Values, Size);
           strcat(Temp_Roman_String, Roman_Letters[index_of_largest_int]);
           current_number = current_number - largest_int;
    }

    strcpy(Roman_String, Temp_Roman_String);
}

int find_largest_int(int Num, int* My_Array, int Size_of_Array)
{
    //find the largest int in My_Array less than Num
    int max_num = 0;
    for (int index = 0; index < Size_of_Array; index++)
    {
        int current_val = My_Array[index];
        if ((current_val<=Num) && (max_num < current_val))
        {
            max_num = current_val;
        }
    }
    return max_num;
}

int get_index_of(int Num, int* My_Array, int Size_of_Array)
{
    //Get the index of Num in My_Array, return -1 if not there
    //No multiple values
    int index = -1;
    for (int i = 0; i < Size_of_Array; i++)
    {
        int current_val = My_Array[i];
        if (current_val == Num)
        {
            index = i;   
        }
    }
    
    return index;
}






