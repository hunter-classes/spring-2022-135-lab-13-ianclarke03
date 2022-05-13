#include <iostream>
#include "funcs.h"



int main() {

  std::cout << "Task A\n";
  std::cout << "printRange(-2, 10)\n";
  std::cout << printRange(-2, 10) << std::endl;
  std::cout << "\n";
  std::cout << "printRange(1, 5)\n";
  std::cout << printRange(1, 5) << std::endl;
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
  std::cout << isAlphanumeric("ABCD") << std::endl;        // true (1)
    std::cout << isAlphanumeric("Abcd1234xyz") << std::endl; // true (1)
    std::cout << isAlphanumeric("KLMN 8-7-6") << std::endl;  // false (0)




  std::cout << "\nTask E\n";
  std::cout << nestedParens("((()))") << std::endl;      // true (1)
    std::cout << nestedParens("()") << std::endl;          // true (1)
    std::cout << nestedParens("") << std::endl;            // true (1)
    std::cout << nestedParens("(((") << std::endl;         // false (0)
    std::cout << nestedParens("(()") << std::endl;         // false (0)
    std::cout << nestedParens(")(") << std::endl;          // false (0)
    std::cout << nestedParens("a(b)c") << std::endl;       // false (0)



  
  return 0;
}
