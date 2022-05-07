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

//sum(left, right) = left + sum(left + 1, right)
//Task B

int sumRange(int left, int right){
  int sum;

  if(left < right){
    sum += left;
    left++;
    
    sumRange(left, right);
    //sumRange(left, right) = left + sumRange(left++, right);
  }
  else if (left == right || left > right)
    std::cout << ' ';

  return sum;
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

  
  return 0;
}
