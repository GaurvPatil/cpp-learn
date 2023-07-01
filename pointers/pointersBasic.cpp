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

   // arithmetic operations
   std ::cout << "Arithetic operations " << std::endl;
   std ::cout << "Address of P " << p << std::endl;
   std ::cout << "size of intiger is = " << sizeof(int) << std ::endl;
   std ::cout << "Address p+1 is = " << p + 1 << std ::endl;

   // charetcter pointers
   const char *message{"hello worls"};
   std::cout << "message = " << message << std::endl;
   std::cout << "*message = " << *message << std::endl;
   std::cout << "address of message = " << &message << std::endl;
   std::cout << "size of message  = " << sizeof(message) << std::endl;
   std::cout << "size of char = " << sizeof(char) << std::endl;
}