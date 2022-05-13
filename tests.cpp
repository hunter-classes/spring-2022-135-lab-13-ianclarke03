#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A")
{
    std::string result =  printRange(1,5);
    CHECK(result == "1 2 3 4 5");
};
TEST_CASE("Task B")
{
    
    int result = sumRange(1,3);
    CHECK(result == 6);
    CHECK(printRange(6,8) == "6 7 8");
}
TEST_CASE("TASK C"){
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 10;
    arr[1] = 15;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 12;
    arr[5] = -15;
    arr[6] = 200;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -20;

    CHECK(sumArray(arr, 10) == 218);
    CHECK(sumArray(arr, 5) == 35); // add up the first 5 elements
    CHECK(sumArray(arr, 9) == 238);
}

TEST_CASE("TASK D"){
    CHECK(isAlphanumeric("ABCDEFGHIJK") == true);
    CHECK(isAlphanumeric("hellomynamejeff123") == true);
    CHECK(isAlphanumeric("gnf bbb plplj") == false);
}
TEST_CASE("TASK E"){
    CHECK(nestedParens("()") == true);
    CHECK(nestedParens("") == true);
    CHECK(nestedParens("(()") == false);
}