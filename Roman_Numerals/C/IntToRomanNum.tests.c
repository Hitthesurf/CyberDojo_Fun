#include "IntToRomanNum.h"
#include <assert.h>

//Roman Number Tests
static void test_0_gives_empty_string(void)
{
    char Roman_String[10] = "";
    Roman_Num(0, Roman_String);
    assert (strcmp(Roman_String, "") == 0);
}


static void test_1_gives_I(void)
{
    char Roman_String[10] = "";
    Roman_Num(1, Roman_String);
    assert (strcmp(Roman_String, "I") == 0);

}

static void test_3_gives_III(void)
{
    char Roman_String[10] = "";
    Roman_Num(3, Roman_String);
    assert (strcmp(Roman_String, "III") == 0);
}

static void test_4_gives_IV(void)
{
    char Roman_String[10] = "";
    Roman_Num(4, Roman_String);
    assert (strcmp(Roman_String, "IV") == 0);
}

static void test_5_gives_V(void)
{
    char Roman_String[10] = "";
    Roman_Num(5, Roman_String);
    assert (strcmp(Roman_String, "V") == 0);
}

static void test_larger_ints_are_converted_correctly(void)
{
    char Roman_String[5][10] = {"Test1", "Test2", "Test3",
                                "Test4", "Test5"};
    Roman_Num(47, Roman_String[0]);
    Roman_Num(99, Roman_String[1]);
    Roman_Num(1990, Roman_String[2]);
    Roman_Num(2008, Roman_String[3]);
    Roman_Num(3999, Roman_String[4]);
    
    assert (strcmp(Roman_String[0], "XLVII") == 0);
    assert (strcmp(Roman_String[1], "XCIX") == 0);
    assert (strcmp(Roman_String[2], "MCMXC") == 0);
    assert (strcmp(Roman_String[3], "MMVIII") == 0);
    assert (strcmp(Roman_String[4], "MMMCMXCIX") == 0);
}


//get_index_of tests
static void test_get_index_of_returns_rouge_value_when_not_present(void)
{
     int My_Array[7] = {5, 50, 35, 100, 2, 1000, 15};
     assert (get_index_of(27, My_Array, 7) == -1);
     assert (get_index_of(1001, My_Array, 7) == -1);
}

static void test_get_index_of_returns_correct_value_when_present(void)
{
     int My_Array[7] = {5, 50, 35, 100, 2, 1000, 15};
     assert (get_index_of(5, My_Array, 7) == 0);
     assert (get_index_of(50, My_Array, 7) == 1);
     assert (get_index_of(100, My_Array, 7) == 3);
     assert (get_index_of(15, My_Array, 7) == 6);
}


//Finds largest int tests
static void test_find_largest_int_gives_correct_values(void)
{
    int My_Array[7] = {5, 50, 35, 100, 2, 1000, 15};
    assert (find_largest_int(5, My_Array, 7) == 5);
    assert (find_largest_int(1000, My_Array, 7) == 1000);
    assert (find_largest_int(1500, My_Array, 7) == 1000);
    assert (find_largest_int(55, My_Array, 7) == 50);
    assert (find_largest_int(36, My_Array, 7) == 35);    
}


int main(void)
{
    //Roman Number Tests
    test_0_gives_empty_string();
    test_1_gives_I();
    test_3_gives_III();
    test_4_gives_IV();
    test_5_gives_V();
    test_larger_ints_are_converted_correctly();
    printf("All Roman Number tests passed\n");
    
    //get_index_of tests
    test_get_index_of_returns_rouge_value_when_not_present();
    test_get_index_of_returns_correct_value_when_present();
    printf("All index of tests passed\n");
    
    //Finds largest int tests
    test_find_largest_int_gives_correct_values();
    printf("All find largest int tests passed\n");
}
