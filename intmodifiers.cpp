#include <iostream>
#include <string>

int main()
{

   // intiger modifiers

   signed int value1{10};
   signed int value2{-300};

   std::cout << "value1: " << value1 << std::endl;
   std::cout << "value2: " << value2 << std::endl;

   std::cout << "size of (value-1) : " << sizeof(value1) << std::endl;
   std::cout << "size of (value-2) : " << sizeof(value2) << std::endl;

   unsigned value3{100};
   // unsigned value4{-500}; // complile time error ,  unsigned only allow postive numbers
   std::cout << "value3: " << value3 << std::endl;
   // std::cout << "value2: " << value4 << std::endl;


// short and long 


   return 0;
}