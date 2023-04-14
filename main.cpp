#include <iostream>

// functions

int addNumbers(int first_param, int second_param)
{

   int result = first_param + second_param;
   return result;
}

int multiplyNumbers(int num1, int num2)
{
   int multiplyResult = num1 + num2;
   return multiplyResult;
}

int main()
{
   int first_number{20}; // statement
   int second_number{50};

   int sum = first_number + second_number;

   std::cout << "first number : " << first_number << std::endl;
   std::cout << "second number : " << second_number << std::endl;
   std::cout << "sum1 : " << sum << std::endl;

   sum = addNumbers(20, 20);

   std::cout
       << "sum using function : " << sum << std::endl;

   std::cout << "inline function call : " << addNumbers(100, 100) << std::endl;

   sum = multiplyNumbers(100, 100);

   std ::cout << "multiply numbers : " << sum << std::endl;

   return 0;
}