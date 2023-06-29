#include <iostream>

int main()
{
   int a;
   int *p;
   a = 5000;
   p = &a;
   // *p = 8000; derefrencing . change "a" value also 

   std::cout << "number A print stored value  = " << a << std ::endl;
   std::cout << "number A print address  = " << &a << std ::endl;
   std ::cout << "number P print A's address  = " << p << std ::endl;
   std ::cout << "number P print P's address =  " << &p << std ::endl;
   std ::cout << "number *P print value = " << *p << std ::endl;
}