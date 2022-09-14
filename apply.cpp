// C++ program to find the sum of two
// numbers using function declared in
// header file
#include "iostream"
#include "cstring"
 
// Including header file
#include "lib.h"
using namespace std;
 
// Driver Code
int main()
{
 
    // Given two numbers
    int a = 13, b = 22;
   int len2 = strlen("Hello World");
 
    // Function declared in header
    // file to find the sum
    cout << "Sum is: "
         << sumOfTwoNumbers(a, b)
         << endl;
}
