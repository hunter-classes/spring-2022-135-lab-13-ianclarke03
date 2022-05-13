#include <iostream>
#include "funcs.h"


//Task A
void printRange(int left, int right){

  if (left < right){
    
    std::cout << left << ' ';
    left++;
    
    printRange(left, right);
  }

  else if (left > right)
    std::cout << ' ';

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




int main() {

  std::cout << "Task A\n";
  std::cout << "printRange(-2, 10)\n";
  printRange(-2, 10);
  std::cout << "\n";
  std::cout << "printRange(10, -2)\n";
  printRange(10, -2);
  std::cout << "\n";



  std::cout << "\nTask B\n";
  int x = sumRange(1, 3);
  std::cout << "sumRange(1, 3) = " << x << std::endl;   // 6
  
  int y = sumRange(-2, 10);
  std::cout << "sumRange(-2, 10) = " << y << std::endl;   // 52


  std::cout << "\nTask C\n";
  int size = 5;
  int *arr = new int[size]; // allocate array dynamically
    arr[0] = 10;
    arr[1] = 5;
    arr[2] = -2;
    arr[3] = 100;
    arr[4] = -40;

    int sum1 = sumArray(arr, size); // Add all elements
    std::cout << "sumArray(arr, 5) is " << sum1 << std::endl;  // Sum is 73
    
    int sum2 = sumArray(arr, 3); // Add up first 3 elements
    std::cout << "sumArray(arr, 3) is " << sum2 << std::endl;  // Sum is 13

    delete[] arr;         // deallocate it



  std::cout << "\nTask D\n";



  
  return 0;
}
