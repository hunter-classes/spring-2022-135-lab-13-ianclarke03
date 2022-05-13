#include <iostream>
#include "funcs.h"


//Task A

std::string printRange(int left, int right)
{
    if(left<=right)
    {
        return std::to_string(left) + " " + printRange(left + 1, right);
       
    }
    else
    {
        return "" ;
    }

}





//Task B

int sumRange(int left, int right){

  if(left <= right){
    return left + sumRange(left + 1, right);
  }
  else
    return 0;

}


//Task C

int sumArray(int *arr, int size)
{
    if(size > 0) 
    { 
        return arr[size - 1] + sumArray(arr, size - 1);
    }
    return 0;
}


#include <cctype>

bool isAlphanumeric(std::string s)
{
    if (s.length() == 0)
    {
		return true;
    }
	if (!isalnum(s[0]))
    {
		return false;
    }
	return isAlphanumeric(s.substr(1));

}

bool nestedParens(std::string s) 
{
    if(s.length() == 0) 
    { 
        return true; 
    } 
    else if(s[0] == '(' && s[s.length() - 1] == ')') 
    {
        return nestedParens(s.substr(1, s.length() - 2));
    } 
    else 
    { 
        return false;
    }
}




